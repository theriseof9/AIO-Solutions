//
//  Crowd Surfing.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 7/8/21.
//

#include <bits/stdc++.h>
using namespace std;
int res;
char arr[1001][1001];
int drop[1001][1001];
int dfs(int x, int y) {
    if (drop[x][y]) return drop[x][y];
    if (arr[x][y] == '*') {
        drop[x][y] = 1;
        res += 1;
        return 1;
    }
    if (arr[x][y] == 'v') {
        int a = dfs(x+1, y);
        if (a==1) {drop[x][y] = 1;res+=1;}
        else drop[x][y] = 2;
        return drop[x][y];
    }
    if (arr[x][y] == '>') {
        int a = dfs(x, y+1);
        if (a==1) {drop[x][y] = 1;res+=1;}
        else drop[x][y] = 2;
        return drop[x][y];
    }
    if (arr[x][y] == '+') {
        drop[x][y] = 2;
        return 2;
    }
    return 0;
}
int main() {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(0);
    ifstream cin("surfin.txt");
    ofstream cout("surfout.txt");
    int r, c;
    cin >> r >> c;
    for (int i = 0; i < r; i ++) for (int j = 0; j < c; j ++) cin >> arr[i][j];
    for (int i = 0; i < r; i ++) for (int j = 0; j < c; j ++) dfs(i, j);
    cout << res;
}
