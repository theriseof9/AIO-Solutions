//
//  Wetlands.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ifstream cin("wetin.txt");
    ofstream cout("wetout.txt");
    int curr = 0;
    for (int i = 0; i < 8; i ++) {
        int tmp;
        cin >> tmp;
        curr += tmp;
        curr = max(curr-10, 0);
    }
    cout << curr;
}
