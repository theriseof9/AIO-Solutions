//
//  Robot Vacuum.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 28/8/21.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("robotin.txt");
    ofstream cout("robotout.txt");
    
    int N, x = 0, y = 0;
    cin >> N;
    
    for (int i = 0; i < N; i ++) {
        char c;
        cin >> c;
        
        if (c == 'E') x++;
        if (c == 'N') y++;
        if (c == 'S') y--;
        if (c == 'W') x--;
    }
    cout << abs(x)+abs(y);
}
