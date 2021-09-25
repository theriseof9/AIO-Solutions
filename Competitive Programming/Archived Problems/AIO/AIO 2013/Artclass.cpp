//
//  Artclass.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 19/8/21.
//

#include <bits/stdc++.h>
using namespace std;
char grid[1002][1002];
int visited[1002][1002], ans;

void dfs(int x, int y, vector<pair<int, int>> &v) {
    if (visited[x][y]++) return;
    v.push_back({x, y});
    int dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0};
    for (int i = 0; i < 4; i ++) if (grid[x+dx[i]][y+dy[i]]=='X') dfs(x+dx[i], y+dy[i], v);
}

int main() {
    ifstream cin("artin.txt");
    ofstream cout("artout.txt");
    
    int H, W;
    cin >> H >> W;
    for (int i = 1; i <= H; i ++) for (int j = 1; j <= W; j ++) cin >> grid[i][j];
    for (int i = 1; i <= H; i ++) for (int j = 1; j <= W; j ++) {
        if (!visited[i][j] && grid[i][j] == 'X') {
            vector<pair<int, int>> v;
            dfs(i, j, v);
            int cl = INT_MAX, fl = 0, cr = INT_MAX, fr = 0;
            for (auto i:v) {
                int dl = i.first+i.second-2, dr = i.first+W-i.second-1;
                cl = min(cl, dl), cr = min(cr, dr), fl = max(fl, dl), fr = max(fr, dr);
            }
            ans = max(ans, max(fl-cl, fr-cr));
        }
    }
    cout << ans;
}
