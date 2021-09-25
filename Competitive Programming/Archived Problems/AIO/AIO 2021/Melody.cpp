//
//  Melody.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 30/8/21.
//

#include <bits/stdc++.h>
using namespace std;
 
int f[3][100001], a, b, c;
 
int main() {
    ifstream cin("melodyin.txt");
    ofstream cout("melodyout.txt");
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i ++) {
        int tmp; cin >> tmp;
        f[i%3][tmp]++;
    }
    for (int j = 1; j <= k; j++) a = max(a, f[0][j]);
    for (int j = 1; j <= k; j++) b = max(b, f[1][j]);
    for (int j = 1; j <= k; j++) c = max(c, f[2][j]);
    cout << n - a - b - c << '\n';
}
