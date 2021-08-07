//
//  Chocolate Shop.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
int main () {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(0);
    ifstream cin("chocin.txt");
    ofstream cout("chocout.txt");
    int N, ans, sum = 0;
    cin >> N;
    for (int i = 0; i < N ; i ++) {
        int tmp;
        cin >> tmp;
        sum += tmp;
    }
    ans = sum % 10;
    if (!ans) {
        ans = 10;
    }
    cout << 10-ans;
}
