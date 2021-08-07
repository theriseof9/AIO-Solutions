//
//  Mansion.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
#undef int
int main() {
#define int long long
    ifstream cin("manin.txt");
    ofstream cout("manout.txt");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, a, curr = 0, ans = 0;
    cin >> n >> a;
    int arr[n];
    for (int i = 0; i < n; i ++) cin >> arr[i];
    for (int i = 0; i < a; i ++) curr += arr[i];
    ans = curr;
    for (int i = 0; i < n-a; i ++) {
        curr -= arr[i];
        curr += arr[i+a];
        ans = max(ans, curr);
    }
    cout << ans;
}
