//
//  Beautiful Buildings.cpp
//  archived code
//
//  Created by Zerui Wang on 8/10/22.
//

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main () {
    ifstream cin("spacein.txt");
    ofstream cout("spaceout.txt");
    int N; cin >> N;
    int as[N]; for (auto &x:as) cin >> x;
    for (int i = 0; i < N; i++) {
        int b; cin >> b;
        as[i] -= b;
    }
    vector<int> ds;
    int p = 0, nxt;
    for (auto i:as) {
        nxt = p+i;
        ds.push_back(nxt);
        p = nxt;
    }
    sort(ds.begin(), ds.end());
    int res = 0, dn = ds[N/2];
    for (auto i:ds) res += abs(i-dn);
    cout << res;
}
