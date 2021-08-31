//
//  Street Construction.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
int main() {
    ifstream cin("streetin.txt");
    ofstream cout("streetout.txt");
    int n, k;
    cin >> n >> k;
    if ((n-k) % (k+1)) cout << (n-k)/(k+1)+1;
    else cout << (n-k)/(k+1);
}
