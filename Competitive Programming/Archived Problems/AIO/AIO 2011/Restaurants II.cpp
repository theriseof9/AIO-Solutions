//
//  Restaurants II.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 24/9/21.
//

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ifstream cin("restin.txt");
    ofstream cout("restout.txt");
    int n, a, b, res = 0;
    cin >> n >> a >> b;
    int s[n], t[n], sd[n], td[n], sr[n], tr[n];
    priority_queue<int> st, te;
    for (int i=0; i<n; i++) {
        cin >> s[i] >> t[i];
        sd[i] = s[i]-t[i], td[i] = t[i]-s[i], sr[i] = -s[i], tr[i] = -t[i];
    }
    int sc, tc;
    for (int i=0; i<n; i++) {
        sc = s[i], tc = t[i];
        if(st.size()==a) sc += st.top();
        if(te.size()==b) tc += te.top();
        if(tc <= 0 and sc <= 0) continue;
        if(sc > tc) {
            if (st.size()==a) st.pop();
            st.push(max(td[i], sr[i]));
            res += sc;
        }
        else {
            if (te.size()==b) te.pop();
            te.push(max(sd[i], tr[i]));
            res += tc;
        }
    }
    cout << res;
}
