//
//  TSP.cpp
//  archived code
//
//  Created by Zerui Wang on 8/10/22.
//

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ifstream cin("tspin.txt");
    ofstream cout("tspout.txt");
    
    int N; cin >> N;
    int l[N], r[N];
    for (auto &x:l) cin >> x;
    for (auto &x:r) cin >> x;
    int curr = 0;
    for (int i = 0; i < N;  i++) {
        if (r[i] < curr) {
            cout << "NO";
            return 0;
        }
        curr = max(curr, l[i]);
    }
    cout << "YES";
}
