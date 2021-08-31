//
//  Tag.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
int team[100005];
int main() {
    ifstream cin("tagin.txt");
    ofstream cout("tagout.txt");
    int n, m;
    cin >> n >> m;
    team[2] = 2;
    team[1] = 1;
    int a, b;
    int bc = 1, rc = 1;
    for (int i = 0; i < m; i ++) {
        cin >> a >> b;
        if (team[a] == 2) {
            rc -= team[b];
            team[b] = 2;
            bc += 1;
        } else {
            bc -= team[b]==2;
            team[b] = 1;
            rc += 1;
        }
    }
    cout << rc << " " << bc;
}
