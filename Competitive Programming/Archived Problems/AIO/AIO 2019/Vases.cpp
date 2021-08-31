//
//  Vases.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
int main() {
    ifstream cin("vasesin.txt");
    ofstream cout("vasesout.txt");
    int n;
    cin >> n;
    if (n<6) cout << "0 0 0";
    else cout << "1 2 " << n-3;
}
