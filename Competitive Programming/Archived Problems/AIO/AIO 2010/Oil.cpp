//
//  Oil.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
int main() {
    ifstream cin("oilin.txt");
    ofstream cout("oilout.txt");
    int r, c, k, sr, sc;
    cin >> r >> c >> k;
    char arr[r][c];
    int adjm[r][c];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> arr[i][j];
            if(arr[i][j] == '$') {
                sr = i; sc = j;
            }
        }
    }
    memset(adjm, -1, sizeof(adjm));
    adjm[sr][sc] = 0;
    queue<pair<int, int>> q;
    q.push(make_pair(sr, sc));
    int dr[4] = {0, 1, -1, 0};
    int dc[4] = {1, 0, 0, -1};
    while(!q.empty()) {
        pair<int, int> p = q.front();
        q.pop();
        for(int i = 0; i < 4; i++) {
            int nr = p.first + dr[i], nc = p.second + dc[i];
            if(nr < 0 || nr >= r || nc < 0 || nc >= c) continue;
            if(adjm[nr][nc] != -1 || arr[nr][nc] == '#' || adjm[p.first][p.second] == k) continue;
            adjm[nr][nc] = adjm[p.first][p.second]+1;
            arr[nr][nc] = '*';
            q.push(make_pair(nr, nc));
        }
    }
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) cout << arr[i][j];
        cout << "\n";
    }
}
