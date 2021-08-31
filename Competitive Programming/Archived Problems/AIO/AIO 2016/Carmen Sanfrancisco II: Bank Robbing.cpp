//
//  Carmen Sanfrancisco II: Bank Robbing.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 13/8/21.
//

#include <bits/stdc++.h>
bool possible[100001];
using namespace std;

int main () {
    ifstream cin("wherein.txt");
    ofstream cout("whereout.txt");
    int N, C;
    cin >> N >> C;
    int l=INT_MAX, r=INT_MIN;
    for (int i = 0; i < C; i++) {
        int a;
        cin >> a;
        a--;
        l = min(l,a);
        r = max(r,a);
    }
    int close[N-1];
    for (int i = 0; i < N-1; i++) cin >> close[i];
    int dif = INT_MAX;
    for (int i = l; i < r; i++) dif = min(dif,close[i]-(i-l));
    if (dif > 0) for (int i = l; i < min(min(l+dif,r+1),N-1); i++) possible[i] = true;
    
    dif = INT_MAX;
    for (int i = r-1; i >= l; i--) dif = min(dif,close[i]-(r-1-i));
    if (dif > 0) for (int i = r; i > max(max(r-dif,l-1),0); i--) possible[i] = true;
    
    
    dif = INT_MAX;
    if (l!=0) {
        for (int i = 0; i < r; i++) dif = min(dif,close[i]-i);
        if (dif <= 0) for (int i = 1-dif; i < l; i++) possible[i] = true;
        else for (int i = 0; i < l; i++) possible[i] = true;
    }
    
    dif = INT_MAX;
    if (r!=N-1) {
        for (int i = N-2; i >= l; i--) dif = min(dif,close[i]-(N-2-i));
        if (dif <= 0) for (int i = N+dif-2; i > r; i--) possible[i] = true;
        else for (int i = N-1; i > r; i--) possible[i] = true;
    }
    int ans = 0;
    for (int i = 0; i < N; i++) ans += possible[i];
    cout << ans;
}
