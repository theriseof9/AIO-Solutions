//
//  Travelling Salesperson.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
int main() {
    ifstream cin("salesin.txt");
    ofstream cout("salesout.txt");
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int a, b, c;
    cin >> a >> b >> c;
    cout << a+b+c-min(min(a, b), c);
}
