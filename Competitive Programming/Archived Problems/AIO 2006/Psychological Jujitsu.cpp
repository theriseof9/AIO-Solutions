//
//  Psychological Jujitsu.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 11/8/21.
//

#include <bits/stdc++.h>
using namespace std;

int score(int lp, int bets[]) {
    int p = 0;
    for (int i = 0; i < 13; i++) {
        if (bets[i] < lp) p += i+1;
        else if (bets[i] == lp) p -= i+1;
    }
    return p;
}

int main () {
    ifstream cin("psychin.txt");
    ofstream cout("psychout.txt");
    int bets[13];
    for (int i = 0; i < 13; i++) cin >> bets[i];
    int res = 0;
    for (int i = 1; i <= 13; i++) res = max(res, score(i, bets));
    cout << res;
}
