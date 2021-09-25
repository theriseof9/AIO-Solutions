//
//  Russian Dolls.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 17/8/21.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("dollin.txt");
    ofstream cout("dollout.txt");
    int n, k;
    set<int> s;
    cin >> n >> k;
    s.insert(k);
    for (int i = 0; i < n-1; i++) {
        cin >> k;
        if (k > *(--s.end())) {
            s.insert(k);
        } else {
            s.erase(s.upper_bound(k));
            s.insert(k);
        }
    }
    cout << s.size();
}
