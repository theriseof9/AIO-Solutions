//
//  Chimpanzee.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 13/8/21.
//

#include <bits/stdc++.h>
using namespace std;

int main () {
    ifstream cin("chimpin.txt");
    ofstream cout("chimpout.txt");
    int x, y;
    cin >> x >> y;
    int s = max(abs(x), abs(y));
    if (x==-s||y==-s) cout << int(pow(s*2, 2))+abs(x+s)+abs(y-s);
    else cout << int(pow(s*2-1, 2))+abs(x-s)+abs(y+s-1);
}
