//
//  Wet Chairs.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ifstream cin("chairsin.txt");
    ofstream cout("chairsout.txt");
    int C, N, K, l[100005], ps[100005], ans = INT_MAX;
    cin >> C >> N >> K;
    for (int i = 1; i <= C; i++) {
        char c;
        cin >> c;
        l[i] = c=='d';
    }
    ps[0] = 0;
    for (int i = 1; i <= C; i++) ps[i] = ps[i-1]+l[i];
    int lp = 0;
    for (int i = 1; i <= C; i++) {
        while (ps[i]-ps[lp+1] >= N-K) lp++;
        if (ps[i]-ps[lp] == N-K) ans = min(ans, i-lp);
    }
    cout << max(ans, N);
}
