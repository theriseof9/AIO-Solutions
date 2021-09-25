//
//  Social Distancing.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 30/8/21.
//

#include <bits/stdc++.h>
using namespace std;
int main () {
#define int long long
    ifstream cin("distin.txt");
    ofstream cout("distout.txt");
    int N, K;
    cin >> N >> K;

    int arr[N];
    for (int i = 0; i < N; i++) cin >> arr[i];

    sort(arr, arr+N);

    int ans = 0;
    int l = INT_MIN;
    for (int i = 0; i < N; i++) if (arr[i]-l >= K) {
        l = arr[i];
        ans++;
    }

    cout << ans;
}
