//
//  Election.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 3/10/21.
//

#include <bits/stdc++.h>
using namespace std;

int W, H, N, ans, placed[42069];
priority_queue<pair<pair<int, int>, pair<int, int>>> pq;
stack<int> s;
pair<int, int> temp[42069];

void check(int i, int t) {
    while (s.size() && placed[i] < placed[s.top()]) {
        if (t == 1) temp[s.top()].first = i;
        else temp[s.top()].second = i;
        s.pop();
    }
    s.push(i);
}

void poster(int xlo) {
    fill_n(temp, 42069, make_pair(H+1, 0));
    for (int i = 1; i <= H; i++) check(i, 1);
    while (s.size()) s.pop();
    for (int i = H; i >= 1; i--) check(i, 2);
    while (s.size()) s.pop();
    for (int i = 1; i <= H; i++) ans = max((temp[i].first-temp[i].second-1)*(placed[i]-xlo), ans);
}

int main() {
    ifstream cin("elecin.txt");
    ofstream cout("elecout.txt");
    cin >> W >> H >> N;
    for (int i = 1; i <= N; i++) {
        int x, y, w, h;
        cin >> x >> y >> w >> h;
        pq.push({{x+w, y+h}, {x, y}});
    }
    fill_n(placed, 42069, W);
    while (pq.size()) {
        int x = pq.top().first.first;
        poster(x);
        while (pq.size() && pq.top().first.first == x) {
            int hi = pq.top().first.second, val = pq.top().second.first, lo = pq.top().second.second;
            pq.pop();
            for (int i = lo + 1; i <= hi; i++) placed[i] = val;
        }
    }
    poster(0);
    cout << ans;
}
