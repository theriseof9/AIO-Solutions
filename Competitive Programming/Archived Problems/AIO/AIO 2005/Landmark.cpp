//
//  Landmark.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
#define s " "
using namespace std;
int main() {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(0);
    ifstream cin("landin.txt");
    ofstream cout("landout.txt");
    int r, c;
    cin >> r >> c;
    char arr[r][c];
    for (int i = 0; i < r; i ++) for (int j = 0; j < c; j ++) cin >> arr[i][j];
    int ans = 0;
    int r1, c1;
    for (int i = 0; i < r; i ++) {
        int curr = 0;
        for (int j = 0; j < c; j ++) {
            if (arr[i][j] == '.') {
                curr += 1;
                if (curr > ans) {
                    r1 = i, c1 = j;
                    ans = curr;
                }
            } else {
                    curr = 0;
                }
        }
    }
    bool fr = false;
    for (int i = 0; i < c; i ++) {
        int curr = 0;
        for (int j = 0; j < r; j ++) {
            if (arr[j][i] == '.') {
                curr += 1;
                if (curr > ans && curr != 1) {
                    ans = curr;
                    fr = true;
                    r1 = j, c1 = i;
                }
            } else {
                curr = 0;
            }
        }
    }
    if (fr) cout << r1+1 << s << c1+1 << s << r1+1-ans+1 << s << c1+1;
    else cout << r1+1 << s << c1+1 << s << r1+1 << s << c1+1-ans+1;
}
