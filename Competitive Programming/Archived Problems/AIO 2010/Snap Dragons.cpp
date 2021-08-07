//
//  Snap Dragons.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
map<int, pair<int, int>> m;
int main() {
    ifstream cin("snapin.txt");
    ofstream cout("snapout.txt");
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int a, b, tmp;
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        cin >> tmp;
        m[tmp].first += 1;
    }
    for (int i = 0; i < b; i++) {
        cin >> tmp;
        m[tmp].second += 1;
    }
    int res = 0;
    for (auto i:m) res += i.second.first*i.second.second;
    cout << res;
}
