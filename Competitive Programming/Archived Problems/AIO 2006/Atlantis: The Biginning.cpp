//
//  Atlantis: The Biginning.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
int r, c, a, b;
int heights[51][51];
int saved[51][51];
int dfs(int x, int y) {
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    int next[4] = {};
    if (saved[x][y] != -1) return saved[x][y];
    
    for (int i = 0; i < 4; i ++) {
        int nx = x+dx[i];
        int ny = y+dy[i];
        if (nx < 0 || nx >= r || ny < 0 || ny >= c) next[i] = -1;
        else if (heights[nx][ny] >= heights[x][y]) next[i] = -1;
        else next[i] = dfs(nx, ny);
    }
    int ans = 0;
    for (auto i:next) ans = max(ans, i);
    saved[x][y] = ans+1;
    return ans+1;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(0);
    ifstream cin("atlanin.txt");
    ofstream cout("atlanout.txt");
    cin >> r >> c >> a >> b;
    for ( int i = 0; i < r; i ++) for ( int j = 0; j < c; j ++) cin >> heights[i][j];
    memset(saved, -1, sizeof(saved));
    cout << dfs(a-1, b-1);
}
