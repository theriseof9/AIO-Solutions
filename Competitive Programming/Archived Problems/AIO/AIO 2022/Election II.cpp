//
//  Election II.cpp
//  archived code
//
//  Created by Zerui Wang on 8/10/22.
//

#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int main() {
    ifstream cin("elecin.txt");
    ofstream cout("elecout.txt");
    int N; cin >> N;
    string s; cin >> s;
    for (int i = 0; i < N; i ++) {
        if (s[i]=='A') a++;
        if (s[i]=='B') b++;
        if (s[i]=='C') c++;
    }
    if (a>b && a>c) cout << "A";
    else if (b>a && b>c) cout << "B";
    else if (c>a && c>b) cout << "C";
    else cout << "T";
}
