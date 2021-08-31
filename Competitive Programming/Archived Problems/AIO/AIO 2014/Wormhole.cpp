//
//  Wormhole.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 14/8/21.
//

#include <bits/stdc++.h>
using namespace std;

int col[301], row[301];
int R, C, Q;
char arr[301][301];

int calc() {
    int by = 0, bx = 0;
    int oy = 0, ox = 0;
    for (int x = 0; x < C; x++) {
        if (col[x] == 0) oy++;
        else if (col[x] == R) by++;
    }
    for (int y = 0; y < R; y++) {
        if (row[y] == 0) ox++;
        else if (row[y] == C) bx++;
    }
    if (R==1&&C==1) return 0;
    else if (ox==R || bx==R) return min(R,C);
    else if (R==1||C==1) return 0;
    else if (ox+bx==R) {
        if (R == 2) return 2;
        else return 1;
    } else if (oy+by==C) {
        if (C == 2)  return 2;
        else return 1;
    } else return min(bx+ox,by+oy);
}
 
int main() {
    ifstream cin("wormin.txt");
    ofstream cout("wormout.txt");
    cin >> R >> C >> Q;
    for (int y = 0; y < R; y++) {
        for (int x = 0; x < C; x++) {
            cin >> arr[x][y];
            if (arr[x][y]=='B') {
                row[y]++;
                col[x]++;
            }
        }
    }
    
    cout << calc() << '\n';
    
    for (int i = 0; i < Q; i++) {
        int x, y;
        cin >> y >> x;
        x--, y--;
        if (arr[x][y]=='B') {
            arr[x][y] = 'O';
            col[x]--;
            row[y]--;
        } else {
            arr[x][y] = 'B';
            col[x]++;
            row[y]++;
        }
        cout << calc() << '\n';
    }
}
