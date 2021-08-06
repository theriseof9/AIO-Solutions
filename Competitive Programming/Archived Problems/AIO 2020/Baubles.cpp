//
//  Baubles.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(0);
    ifstream cin("baublesin.txt");
    ofstream cout("baublesout.txt");
    int RO, BO, S, RP, BP;
    cin >> RO >> BO >> S >> RP >> BP;
    S -= max(0, RP-RO);
    S -= max(0, BP-BO);
    if (S < 0) {
        cout << 0;
        return 0;
    }
    int a = max(RO, RP), b = max(BO, BP);
    if (!BP) cout << S+1+a-RP;
    else if (!RP) cout << S+1+b-BP;
    else cout << S+1+min(a-RP, b-BP);
}
