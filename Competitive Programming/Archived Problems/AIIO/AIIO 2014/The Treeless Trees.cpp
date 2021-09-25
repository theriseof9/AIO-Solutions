//
//  The Treeless Trees.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 16/8/21.
//

#include <bits/stdc++.h>
#define int long long
using namespace std;

struct tree {
    int h;
    int ind;
};

bool comp(tree left, tree right) {
    if (left.h == right.h) return left.ind < right.ind;
    return left.h < right.h;
}

#undef int
int main() {
#define int long long
    vector<tree> v;
    int n;
    cin >> n;
    v.push_back({0, 0});
    v.push_back({0, n+1});
    for (int i = 1; i <= n; i++) {
        int temp;
        cin >> temp;
        v.push_back({temp, i});
    }
    sort(v.begin(), v.end(), comp);
 
    bool visited[n+2];
    memset(visited, false, sizeof(visited));
    int s = 0, last = 0, m = 0;
    vector<int> r;
    r.push_back(0);
    long ans = 0;
    for (int i = 1; i < n+2; i++) {
        tree next = v[i];
        if (next.h != last) {
            ans += m*(s-1);
            for (int j:r) {
                visited[j] = true;
                s++;
                if (j < n+1 && visited[j+1]) s--;
                if (j-1 >= 0 && visited[j-1]) s--;
            }
            m = next.h-last;
            last = next.h;
            r.clear();
            r.push_back(next.ind);
        }
        else r.push_back(next.ind);
    }
    ans += m*(s-1);
    cout << ans;
}
