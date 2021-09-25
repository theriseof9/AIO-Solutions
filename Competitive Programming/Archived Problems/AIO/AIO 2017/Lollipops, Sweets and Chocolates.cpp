//
//  Lollipops, Sweets and Chocolates.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 25/9/21.
//

#include <bits/stdc++.h>
using namespace std;

int p[169420], o[169420];
 
int main() {
    ifstream cin("lscin.txt");
    ofstream cout("lscout.txt");
    int N, L;
    cin >> N >> L;
    for (int i = 0; i < N; i++) cin >> p[i+1];
    for (int i = 0; i < N; i++) cin >> o[i];
    int l = 1, h = L;
    int flag = 0;
    for (int i = 1; i < N; i++) {
        int a = p[o[i-1]], b = p[o[i]], m = (a+b)/2;
        if (a>b&&flag!=-1) {
            l = max(l, m);
            flag = -1;
        } else if (b>a&&flag!=1) {
            h = min(h, m);
            flag = 1;
        }
        if (l > h) break;
    }
    if (l <= h && h > 0) cout << h;
    else cout << -1;
}
