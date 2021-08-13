//
//  King Arthur II.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 11/8/21.
//

#include <bits/stdc++.h>
using namespace std;

int ans, visited[100001];
vector<int> adjList[100001];
 
void bfs(int v) {
    int cnt[2] = {0, 0};
    queue<pair<int, int>> q;
    q.push({v, 0});
    while (q.size()) {
        pair<int, int> p=q.front();
        q.pop();
        if (visited[p.first]) continue;
        visited[p.first] = 1;
        cnt[p.second]++;
        for (auto i:adjList[p.first]) q.push({i, p.second^1});
    }
    ans += max(cnt[0], cnt[1]);
}
 
int main() {
    ifstream cin("arthin.txt");
    ofstream cout("arthout.txt");
    int N, P;
    queue<pair<int, int>> q;
    cin >> N >> P;
    for (int i = 0; i < P; i++) {
        int x, y; cin >> x >> y;
        adjList[x].push_back(y);
        adjList[y].push_back(x);
    }
    for (int i = 1; i <= N; i++) {
        if (visited[i]) continue;
        bfs(i);
    }
    cout << ans;
}
