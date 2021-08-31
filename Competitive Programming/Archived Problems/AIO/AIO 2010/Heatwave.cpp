//
//  Heatwave.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
int main() {
    ifstream cin("heatin.txt");
    ofstream cout("heatout.txt");
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    long long int n, b;
    long long  ans = 0;
    long long  curr = 0;
    cin >> n >> b;
    long long  arr[n];
    for (int i = 0; i < n; i ++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i ++) {
        if (arr[i]>=b) {
            curr += 1;
        } else {
            ans = max(ans, curr);
            curr = 0;
        }
    }
    cout << max(ans, curr);
}
