//
//  Restaurants.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 7/8/21.
//

#include <bits/stdc++.h>
using namespace std;

int maxind(int arr[], int n, set<int> arrc[], int k) {
    int mind = -1;
    int mx = -1;
    for (int i = 0; i < n; i ++) {
        if (arr[i]>mx&&!arrc[k].count(i)&&arr[i]>0) {
            mx = arr[i]; mind = i;
        }
    }
    return mind;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(0);
    ifstream cin("restin.txt");
    ofstream cout("restout.txt");
    int n, m;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i ++) cin >> arr[i];
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i ++) cin >> arr2[i];
    set<int> arrc[n];
    int ans = 0;
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < arr[i]; j ++) {
            int ix = maxind(arr2, m, arrc, i);
            if (ix == -1) ans++;
            else {
                arrc[i].insert(ix);
                arr2[ix] -= 1;
            }
        }
    }
    cout << ans;
}
