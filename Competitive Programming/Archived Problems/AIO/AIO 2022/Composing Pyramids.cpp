//
//  Composing Pyramids.cpp
//  archived code
//
//  Created by Zerui Wang on 8/10/22.
//

#include <bits/stdc++.h>
using namespace std;
 
#define MAXN 100005
#define MAXP 1000005
 
int a[MAXN], pf[MAXN], pb[MAXN], seqs[MAXP];
 
int main() {
    ifstream cin("compin.txt");
    ofstream cout("compout.txt");
    int N; cin >> N;
    for (auto &x:a) cin >> x;
    for (int i = 0; i < N; i++) {
        seqs[a[i]] = max(seqs[a[i]], seqs[a[i]-1]+1);
        pf[i] = seqs[a[i]];
    }
    memset(seqs, 0, sizeof seqs);
    for (int i = N-1; i >= 0; i--) {
        seqs[a[i]] = max(seqs[a[i]], seqs[a[i]-1]+1);
        pb[i] = seqs[a[i]];
    }
    int best = 0;
    for (int i = 0; i < N; i++) best = max(best, min(pf[i],pb[i])*2-1);
    cout << N-best;
}
