//
//  Ninjas.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
int main() {
    ifstream cin("ninjain.txt");
    ofstream cout("ninjaout.txt");
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n, m;
    cin >> n >> m;
    if (m==0) {
        cout << 0;
        return 0;
    }
    int curr = 1;
    int res = 0;
    while (curr<=n) {
        curr += m+1;
        res += 1;
    }
    cout << n-res;
}
