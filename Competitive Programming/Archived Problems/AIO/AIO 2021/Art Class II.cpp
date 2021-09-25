//
//  Art Class II.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 28/8/21.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("artin.txt");
    ofstream cout("artout.txt");
    
    int N, mx = INT_MIN, my = INT_MIN, sx = INT_MAX, sy = INT_MAX;
    cin >> N;
    
    for (int i = 0; i < N; i ++) {
        int x, y;
        cin >> x >> y;
        
        mx = max(x, mx); my = max(y, my); sx = min(x, sx); sy = min(y, sy);
    }
    cout << (mx-sx)*(my-sy);
}
