//
//  Treasure Hunt.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
int adjmatrix[1005][1005];
int main(){
    ifstream cin("cavein.txt");
    ofstream cout("caveout.txt");
    int h, w, ans = 1;
    cin >> h >> w;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            char a;
            cin >> a;
            if (a=='.') adjmatrix[i][j] = 1;
        }
    }
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            int k = adjmatrix[i-1][j]+adjmatrix[i+1][j]+adjmatrix[i][j-1]+adjmatrix[i][j+1];
            if (k >= 3 && adjmatrix[i][j]) {
                ans += k-2;
            }
        }
    }
    ans += adjmatrix[1][2]&&adjmatrix[2][1];
    cout << ans;
}
