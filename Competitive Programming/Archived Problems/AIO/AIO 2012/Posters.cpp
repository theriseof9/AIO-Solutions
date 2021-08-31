//
//  Posters.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;

int main () {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(0);
    ifstream cin("postin.txt");
    ofstream cout("postout.txt");
    int N;
    cin >> N;
    int cX, cY, ans=1;
    cin >> cX >> cY;
    for (int i = 2; i <= N; i ++) {
        int X, Y;
        cin >> X >> Y;
        if (X<cX+cY) {
            cX = X;
            cY = Y;
            ans = i;
        }
    }
    cout << ans;
}
