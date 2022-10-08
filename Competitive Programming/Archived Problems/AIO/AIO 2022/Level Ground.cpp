//
//  Level Ground.cpp
//  archived code
//
//  Created by Zerui Wang on 8/10/22.
//

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ifstream cin("groundin.txt");
    ofstream cout("groundout.txt");
 
    int N; cin >> N;
    int a[N];
    for (auto &x:a) cin >> x;
 
    int res = 0, len = 1;
    for (int i = 1; i < N; i++) {
        if (a[i] == a[i-1]) len++;
        else {
            if (a[i-1] * len > res) res = a[i-1] * len;
            len = 1;
        }
    }
    if (a[N-1] * len > res) res = a[N-1] * len;
    cout << res;
 
}
