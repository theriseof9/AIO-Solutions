//
//  Spies V: Voices in the Dark.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 8/8/21.
//

#include <bits/stdc++.h>
#define s " "
using namespace std;

int main() {
    ifstream cin("spiesin.txt");
    ofstream cout("spiesout.txt");
    int N, K;
    cin >> N;
    vector<pair<int, int>> v;
    for (int i = 0; i < N; i ++) {
        int a, b;
        cin >> a >> b;
        v.push_back({a, 1});
        v.push_back({b+1, -1});
    }
    cin >> K;
    for (int i = 0; i < K; i ++) {
        int a, b;
        cin >> a >> b;
        v.push_back({a, 1});
        v.push_back({b+1, -1});
    }
    int ctr = 0, res = 0;
    sort(v.begin(), v.end());
    for (auto it = v.begin(); it != v.end(); it ++) {
        ctr += it->second;
        if (ctr==2) {
            res += (it+1)->first-it->first-1;
        }
    }
    cout << res;
}
