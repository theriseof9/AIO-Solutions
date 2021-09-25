//
//  Sculpture.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 24/9/21.
//

#include <bits/stdc++.h>
using namespace std;
 
int ans, dist[100001];
vector<pair<int, int>> adjlist[100001];
 
void dfs(int v) {
    for (auto i:adjlist[v]) {
        dfs(i.first);
        dist[i.first] += i.second;
        dist[v] = max(dist[i.first], dist[v]);
    }
    if (adjlist[v].size() == 2) ans += abs(dist[adjlist[v][0].first]-dist[adjlist[v][1].first]);
}
 
int main() {
    ifstream cin("sculpin.txt");
    ofstream cout("sculpout.txt");
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        int a, x, b, y;
        cin >> a >> x >> b >> y;
        if (x) adjlist[i].push_back({a, x});
        if (y) adjlist[i].push_back({b, y});
    }
    dfs(1);
    cout << ans;
}
