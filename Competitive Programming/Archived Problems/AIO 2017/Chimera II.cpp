//
//  Chimera II.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
char curr;
int main() {
    ifstream cin("chimin.txt");
    ofstream cout("chimout.txt");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n, res = -1;
    string N, T, S;
    cin >> n >> N >> T >> S;
    
    for (int i = 0; i < n; i ++) {
        if (S[i] != N[i] && S[i] != T[i]) {
            cout << "PLAN FOILED";
            return 0;
        }
        char tmp = curr;
        if (N[i] == T[i]) curr = tmp;
        else {
            if (N[i] == S[i]) curr = 'N';
            else curr = 'T';
        }
        if (tmp != curr) res += 1;
    }
    
    cout << "SUCCESS\n" << res;
}
