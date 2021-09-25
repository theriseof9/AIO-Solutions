//
//  Space Mission.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 31/8/21.
//

#include <bits/stdc++.h>
using namespace std;
 
int main () {
    ifstream cin("spacein.txt");
    ofstream cout("spaceout.txt");
    int n, f;
    cin >> n >> f;
    int C[n];
    vector<int> l = {0}, r = {n-1};
    for (int i = 0; i < n; i ++) cin >> C[i];
    for (int i = 1; i < n; i ++) {
        if (C[i] < C[*(--l.end())]) l.push_back(i);
        if (C[n-1-i] < C[*(--r.end())]) r.push_back(n-1-i);
    }
    int i = 0, j = r.size()-1;
    vector<int> ans = {-1};
    while (i != l.size() && j != -1) {
        if (C[l[i]]+C[r[j]] > f) i++;
        else {
            if (l[i] != r[j]) ans.push_back(r[j]-l[i]+1);
            j--;
        }
    }
    
    int mx = INT_MIN;
    for (auto a:ans) mx = max(a, mx);
    cout << mx;
}
