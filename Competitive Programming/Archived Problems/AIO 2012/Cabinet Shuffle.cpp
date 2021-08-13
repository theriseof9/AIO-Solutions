//
//  Cabinet Shuffle.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 11/8/21.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("shufflein.txt");
    ofstream cout("shuffleout.txt");
    queue<int> q;
    stack<int> s;
    int N, K, prime, fst;
    int ministers[1000001], chairs[1000001];
    memset(ministers, 0, sizeof(ministers));
    memset(chairs, 0, sizeof(chairs));
    cin >> N >> K;
    for (int i = 0; i < K; i++) {
        int a;
        cin >> a;
        chairs[a] = 1;
    }
    for (int i = 1; i <= K+1; i++) {
        int a;
        cin >> a;
        ministers[a] = i;
    }
    for (int i = N; i >= 1; i--) {
        if (chairs[i]) {
            s.push(i);
            fst = i;
        }
        if (ministers[i]) {
            int m = ministers[i];
            if (s.empty()) q.push(m);
            else {
                if (s.top() == fst) prime = m;
                s.pop();
            }
        }
    }
    while (!s.empty()) {
        int f = q.front();
        q.pop();
        if (s.top() == fst) prime = f;
        s.pop();
    }
    cout << prime << '\n' << q.front();
}
