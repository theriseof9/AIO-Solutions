//
//  Slicing Paradise.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
int main() {
    ifstream cin("slicein.txt");
    ofstream cout("sliceout.txt");
    int N;
    cin >> N;
    int A[N], B[N];
    memset(B, 0, sizeof(B));
    for (int i = 0; i < N; i ++) {
        int a;
        cin >> a;
        A[a-1] = i;
    }
    int ans = 1;
    int c = 1;
    for (auto i:A) {
        int tmp = 0;
        if (i!=0&&i!=N-1) {
            if (B[i-1]&&B[i+1]) tmp = -1;
            else if (!B[i-1]&&!B[i+1]) tmp = 1;
        }
        B[i] = 1;
        c += tmp;
        ans = max(ans, c);
    }
    cout << ans;
}
