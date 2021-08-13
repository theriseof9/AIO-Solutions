//
//  Janitor.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 10/8/21.
//

#include <bits/stdc++.h>
using namespace std;
 
int r, c, q, arr[11][100001];
bool fn(int x, int y){
    if (x < 0 || x >= r) return false;
    if (y < 0 || y >= c) return false;
    bool A = (x == r-1) || (arr[x+1][y] < arr[x][y]);
    bool B = (x == 0) || (arr[x-1][y] < arr[x][y]);
    bool C = (y == 0) || (arr[x][y-1] < arr[x][y]);
    bool D = (y == c-1) || (arr[x][y+1] < arr[x][y]);
    return A && B && C && D;
}
 
int main(){
    ifstream cin("janitorin.txt");
    ofstream cout("janitorout.txt");
    cin >> r >> c >> q;
    for(int i = 0; i < r; i ++)
        for(int j = 0; j < c; j ++)
            cin >> arr[i][j];
    int sum = 0;
    for(int i = 0; i < r; i ++)
        for(int j = 0; j < c; j ++)
            sum += fn(i, j);
    cout << sum << '\n';
    for (int i = 0; i < q; i ++) {
        int x, y, h; cin >> x >> y >> h;
        x--; y--;
        int dx[] = {0, 0, 0, 1, -1};
        int dy[] = {0, 1, -1, 0, 0};
        int ar[] = {0, 0, 0, 0, 0};
        for (int i = 0; i < 5; i ++){
            int nx = dx[i]+x;
            int ny = dy[i]+y;
            ar[i] = fn(nx, ny);
        }
        arr[x][y] = h;
        for (int i = 0; i < 5; i ++){
            int nx = dx[i]+x;
            int ny = dy[i]+y;
            sum += fn(nx, ny) - ar[i];
        }
        cout << sum << '\n';
    }
}
