//
//  Fashion Statement.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
int main() {
    ifstream cin("fashin.txt");
    ofstream cout("fashout.txt");
    int v, ans = 0;
    cin >> v;
    ans += v/100;
    v%=100;
    ans += v/20;
    v%=20;
    ans += v/5;
    v%=5;
    ans += v;
    cout << ans;
}
