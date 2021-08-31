//
//  Awesome Frog.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 14/8/21.
//

#include <bits/stdc++.h>
using namespace std;
 
int main () {
    ifstream cin("frogin.txt");
    ofstream cout("frogout.txt");
    int N, K;
    cin >> N >> K;
    int d[N];
    memset(d, 0, sizeof(d));
    for (int i = 1; i < N; i++) {
        cin >> d[i];
        d[i] += d[i-1];
    }
    for (int i = 0; i < N; i ++) d[i] -= (i-N)*K;
    sort(d, d+N);
    int b = 0;
    for (int i = 0; i < N; i ++) b += abs(d[i]-d[N/2]);
    cout << b;
}
