//
//  No (One) Left.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 3/10/21.
//

#include <bits/stdc++.h>
using namespace std;
int dp[100005][2];
 
struct point {
    int x, miy, may;
};
 
int main() {
    ifstream cin("leftin.txt");
    ofstream cout("leftout.txt");
    int n; cin >> n;
    map<int, pair<int, int>> m;
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        if (!m.count(x)) {
            m[x].first = y;
            m[x].second = y;
        } else {
            m[x].first = min(m[x].first, y);
            m[x].second = max(m[x].second, y);
        }
    }
 
    vector<point> v;
 
    for (auto a:m) v.push_back({a.first, a.second.first, a.second.second});
    
    dp[0][1] = v[0].may-v[0].miy;
    dp[0][0] = v[0].may-v[0].miy;
 
    for (int i = 1; i < v.size(); i++) {
        dp[i][0] = min(dp[i-1][0]+abs(v[i].may-v[i-1].miy)+v[i].may-v[i].miy,dp[i-1][1]+abs(v[i].may-v[i-1].may)+v[i].may-v[i].miy);
        dp[i][1] = min(dp[i-1][0]+abs(v[i].miy-v[i-1].miy)+v[i].may-v[i].miy,dp[i-1][1]+abs(v[i].miy-v[i-1].may)+v[i].may-v[i].miy);
        dp[i][0] += v[i].x-v[i-1].x;
        dp[i][1] += v[i].x-v[i-1].x;
    }
    cout << min(dp[v.size()-1][0], dp[v.size()-1][1]);
}
