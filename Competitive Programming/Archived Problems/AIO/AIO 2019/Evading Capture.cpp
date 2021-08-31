//
//  Evading Capture.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 10/8/21.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream cin("evadingin.txt");
    ofstream cout("evadingout.txt");
    int V, E, S, K;
    cin >> V >> E >> S >> K;
    vector<int> adjlist[V];
    S--;
    for(int i = 0; i < E; i ++){
        int a, b; cin >> a >> b;
        adjlist[a-1].push_back(b-1);
        adjlist[b-1].push_back(a-1);
    }
    int d[V][2];
    memset(d, -1, sizeof(d));
    d[S][0] = 0;
    queue<pair<int, bool>> q;
    q.push({S, false});
    while (!q.empty()){
        pair<int, int> x = q.front();
        q.pop();
        for (auto i:adjlist[x.first])
            if (d[i][!x.second] == -1) {
                d[i][!x.second] = d[x.first][x.second]+1;
                q.push({i, !x.second});
            }
    }
    int dist[V];
    memset(dist, -1, sizeof(dist));
    dist[S] = 0;
    queue<int> q2;
    q2.push(S);
    while(!q2.empty()){
        int x = q2.front();
        q2.pop();
        for (auto i:adjlist[x])
            if (dist[i] == -1) {
                dist[i] = dist[x] + 1;
                q2.push(i);
            }
    }
    int ans = 0;
    for (int i = 0; i < V; i ++)
        if (dist[i] <= K && d[i][K&1] <= K && dist[i] != -1 && d[i][K&1] != -1)
            ans ++;
    cout << ans;
}
