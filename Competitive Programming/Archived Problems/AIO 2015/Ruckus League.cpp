//
//  Ruckus League.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 11/8/21.
//

#include <bits/stdc++.h>
using namespace std;
 
vector<int> adjlist[100001];
bool visited[1000001];
bool l;
vector<int> line;
vector<int> loop;
 
 
int dfs(int i) {
    visited[i] = 1;
    int sum = 0;
    if (adjlist[i].size()==2&&visited[adjlist[i][0]]&&visited[adjlist[i][1]]) l = true;
    else for (auto j:adjlist[i]) if (!visited[j]) sum += dfs(j);
    return sum+1;
}
 
int main () {
    ifstream cin("ruckusin.txt");
    ofstream cout("ruckusout.txt");
    int N, M, K, T;
    cin >> N >> M >> K >> T;
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        if (!adjlist[a].empty() && adjlist[a].back() == b) {
            visited[a] = 1;
            visited[b] = 1;
            loop.push_back(2);
        } else {
            adjlist[a].push_back(b);
            adjlist[b].push_back(a);
        }
    }
 
    for (int i = 0; i < N; i++) {
        if (visited[i]) continue;
        l = 0;
        int r = dfs(i);
        if (l) loop.push_back(r);
        else line.push_back(r);
    }

    int res = 0;
    for (auto i:line) if (i>=T) res++;
    for (auto i:loop) if (i>=T) res++;
    sort(loop.begin(), loop.end(), greater<int>());
    
    for (int i = 0; i < line.size() && K > 0; i++) {
        while (line[i]>=2*T && K>0) {
            K--;
            line[i]-=T;
            res++;
        }
    }
    for (int i = 0; i < loop.size() && K > 0; i++) {
        K--;
        while (loop[i]>=T*2 && K>0) {
            K--;
            loop[i]-=T;
            res++;
        }
    }
    cout << res;
 
}
