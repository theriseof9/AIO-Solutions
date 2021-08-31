//
//  Superphone.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(0);
    ifstream cin("phonein.txt");
    ofstream cout("phoneout.txt");
    
    int n; cin >> n;
    int arr[100001][3];
    int dp[100001][2];
    dp[0][0] = 0;
    for (int i = 0; i < n; i++) {
        if (i == n-1) cin >> arr[i][1];
        else cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    dp[0][1] = arr[0][1];
    for (int i = 0; i < n-1; i++) {
        dp[i+1][0] = min(dp[i][1]+arr[i][2], dp[i][0]+arr[i][0]+arr[i+1][1]);
        dp[i+1][1] = min(dp[i][0]+arr[i][0], dp[i][1]+arr[i][2]+arr[i+1][1]);
    }
    cout << dp[n-1][1];
}
