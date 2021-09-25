//
//  Laser Cutter.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 30/8/21.
//

#include <bits/stdc++.h>
using namespace std;
 
int main () {
    ifstream cin("laserin.txt");
    ofstream cout("laserout.txt");
    
    int N;
    cin >> N;
    
    string a, b;
    cin >> a >> b;
 
    int curr = 0, res = 0;
    for (int i = 0; i < 2*N; i++) {
        if (a[i] == 'D' && b[i] == 'R') curr++;
        if (a[i] == 'R' && b[i] == 'D') curr--;
        res = max(res, curr);
    }
    cout << res;
}
