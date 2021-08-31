//
//  Detective.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 15/8/21.
//

#include <bits/stdc++.h>
using namespace std;
 
int n, m, a, b, tt, c[100001], ca, cb, definite;
bool eca, ecb, ecd, any, blacked, black[100001];
vector<pair<int, int>> g[100001];
vector<int> cs[100001];
vector<pair<set<int>, set<int>>> gs;
set<int> defs;

void exitt() {
    exit(0);
}

void dfs(int v, int t) {
    if (!c[v]) {
        c[v] = t;
        for (auto i:cs[v]) {
            if (t == 1) gs.back().first.insert(i);
            else if (t == 2) gs.back().second.insert(i);
        }
        for (auto i:g[v]) {
            if ((t == 1 && i.second == 1) || (t == 2 && i.second == 2)) dfs(i.first, 1);
            else if ((t == 1 && i.second == 2) || (t == 2 && i.second == 1)) dfs(i.first, 2);
        }
    } else if (c[v] != t) {
        cout << "MISTAKE";
        exitt();
    }
}
 
int main() {
    freopen("detectivein.txt", "r", stdin);
    freopen("detectiveout.txt", "w", stdout);
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        cin >> a >> b >> tt;
        if (tt == 1 || tt == 2) {
            g[a].push_back({b,tt});
            g[b].push_back({a,tt});
        } else cs[a].push_back(b);
    }
    for (int i = 1; i <= n; i++) {
        if (c[i] == 0) {
            gs.push_back({set<int>(),set<int>()});
            dfs(i, 1);
            for (auto i: gs.back().second) {
                if (gs.back().first.find(i) != gs.back().first.end()) {
                    cout << "MISTAKE";
                    exitt();
                }
            }
            if (gs.back().first.size() > 1 && gs.back().second.size() > 1) {
                cout << "MISTAKE";
                exitt();
            } else if (gs.back().first.size() > 1 && gs.back().second.size() <= 1) {
                for (auto i: gs.back().first) {
                    black[i] = true;
                }
            } else if (gs.back().first.size() <= 1 && gs.back().second.size() > 1) {
                for (auto i: gs.back().second) black[i] = true;
            }
            if (gs.back().first.empty() || gs.back().second.empty()) gs.pop_back();
        }
    }
    
    for (auto i: gs) {
        if (i.first.size() > 1 && i.second.size() == 1) {
            if (black[*i.second.begin()]) {
                cout << "MISTAKE";
                exitt();
            }
        } else if (i.first.size() == 1 && i.second.size() > 1) {
            if (black[*i.first.begin()]) {
                cout << "MISTAKE";
                exitt();
            }
        } else if (i.first.size() == 1 && i.second.size() == 1) {
            if (black[*i.first.begin()] && black[*i.second.begin()]) {
                cout << "MISTAKE";
                exitt();
            }
        }
    }
 
    if (gs.empty()) {
        for (int i = 1; i <= n; i++) {
            if (!black[i]) {
                cout << i << endl;
                any = true;
            }
        }
        if (!any) {
            cout << "MISTAKE";
            exitt();
        }
        exitt();
    }
 
    for (auto i:gs) {
        if (i.first.size() > 1 && i.second.size() == 1) defs.insert(*i.second.begin());
        else if (i.first.size() == 1 && i.second.size() > 1) defs.insert(*i.first.begin());
    }
    if (defs.size() > 1) {
        cout << "MISTAKE";
        exitt();
    } else if (defs.size() == 1) {
        definite = *defs.begin();
        if (black[definite]) {
            cout << "MISTAKE";
            exitt();
        }
        ecd = true;
        for (auto i:gs) {
            if (i.first.size() == 1 && i.second.size() == 1) {
                if (*i.first.begin() != definite && *i.second.begin() != definite) {
                    cout << "MISTAKE";
                    exitt();
                }
            }
        }
        cout << definite;
        exitt();
    } else if (!defs.size()) {
        ca = *gs.front().first.begin();
        cb = *gs.front().second.begin();
        eca = true;
        ecb = true;
        for (auto i:gs) {
            if (*i.first.begin() != ca && *i.second.begin() != ca) eca = false;
            if (*i.first.begin() != cb && *i.second.begin() != cb) ecb = false;
        }
        if (!eca && !ecb) {
            cout << "MISTAKE";
            exitt();
        } else if (eca && ecb) {
            if (black[ca] && black[cb]) {
                cout << "MISTAKE";
                exitt();
            } else if (black[ca] && !black[cb]) {
                cout << cb;
                exitt();
            } else if (!black[ca] && black[cb]) {
                cout << ca;
                exitt();
            } else if (!black[ca] && !black[cb]) {
                cout << min(ca, cb) << endl << max(ca, cb);
                exitt();
            }
        } else if (eca && !ecb) {
            if (black[ca]) {
                cout << "MISTAKE";
                exitt();
            } else if (!black[ca]) {
                cout << ca;
                exitt();
            }
        } else if (!eca && ecb) {
            if (black[cb]) {
                cout << "MISTAKE";
                exitt();
            } else if (!black[cb]) {
                cout << cb;
                exitt();
            }
        }
    }
}
