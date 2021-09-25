//
//  Friendly.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 15/8/21.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int coklats = -1, s=0, A[N], B[N], C[N], c[100001];
    memset(c, 0, sizeof(c));
    for (int i = 0; i < N; i ++) cin >> A[i] >> B[i] >> C[i];
    for (int i = N-1; i >= 0; i --) c[A[i]] = max(c[A[i]], C[i] + c[B[i]]);
    for (int i = 1; i <= K; i ++) {
        if (c[i]==coklats) s++;
        else if (c[i] > coklats) {
            coklats = c[i];
            s = 1;
        }
    }
    cout << coklats << endl << s;
}
