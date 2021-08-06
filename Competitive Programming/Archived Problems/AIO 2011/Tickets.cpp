//
//  Tickets.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
#define maxN 100009
using namespace std;
 
int c1, d1, c2, d2, D, day[maxN], dp[maxN];
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("ticketin.txt", "r", stdin);
    freopen("ticketout.txt", "w", stdout);
    cin >> c1 >> d1 >> c2 >> d2 >> D;
    for (int i = 1; i <= D; i++) cin >> day[i];
    fill_n(dp, maxN, 1e9);
    dp[1] = 0; day[D+1] = 1e9;
    for (int i = 1; i <= D; i++) {
        int a = lower_bound(begin(day)+1, begin(day)+D+2, day[i]+d1) - begin(day);
        int b = lower_bound(begin(day)+1, begin(day)+D+2, day[i]+d2) - begin(day);
        dp[a] = min(dp[i] + c1, dp[a]);
        dp[b] = min(dp[i] + c2, dp[b]);
    }
    cout << dp[D+1];
}
