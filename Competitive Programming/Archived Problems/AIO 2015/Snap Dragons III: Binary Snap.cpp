//
//  Snap Dragons III: Binary Snap.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 13/8/21.
//

#include <bits/stdc++.h>
using namespace std;
int v[200005], p[200005], ps[200005], f[100005], s[100005], dp[200005];
int main() {
    ifstream cin("snapin.txt");
    ofstream cout("snapout.txt");
    int N;
    cin >> N;
    int c[2*N];
    for (int i = 0; i < 2*N; i++) cin >> c[i];
    for (int i = 0; i < 2*N; i++) {
        if (c[i] == c[i+1]) p[i]++;
        if (!v[c[i]]) f[c[i]] = i;
        else s[c[i]] = i;
        v[c[i]] = 1;
    }
    for (int i = 0; i < 2*N; i++) ps[i] = ps[i-1] + p[i];
    for (int i = 2*N-1; i >= 0; i--) {
        dp[i] = dp[i+1];
        int tmp = s[c[i]]-1;
        if (f[c[i]] == i) dp[i] = max(dp[i], dp[tmp]+1+ps[tmp]-ps[i]);
    }
    cout << dp[0];
}
