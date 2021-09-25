//
//  ride.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 18/8/21.
//

/*
ID: h2010151
TASK: ride
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("ride.in");
    ofstream cout("ride.out");
    
    string a, b;
    int sm1 = 1, sm2 = 1;
    cin >> a >> b;
    for (auto i:a) sm1 *= i-'A'+1;
    for (auto i:b) sm2 *= i-'A'+1;
    if (sm1%47==sm2%47) cout << "GO" << endl;
    else cout << "STAY" << endl;
}
