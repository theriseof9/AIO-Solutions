//
//  Ants.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(0);
    ifstream cin("antsin.txt");
    ofstream cout("antsout.txt");
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i ++) cin >> arr[i];
    bool inc = false;
    int curr = arr[0], ans = 0;
    for (int i = 1; i < n; i ++) {
        if (curr >= arr[i]) {
            inc = false;
        } else {
            if (!inc) {
                inc = true;
                ans++;
            }
        }
        curr = arr[i];
    }
    cout << ans;
}
