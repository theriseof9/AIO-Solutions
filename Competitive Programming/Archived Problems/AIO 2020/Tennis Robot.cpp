//
//  Tennis Robot.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 10/8/21.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("tennisin.txt");
    ofstream cout("tennisout.txt");
    int B, N, ind = 1;
    cin >> B >> N;
    pair<int, int> A[B+1];
    for (int i = 0; i < B; i++) {
        cin >> A[i].first;
        A[i].second = i+1;
    }
    A[B] = {0, 0};
    sort(A, A+B+1);
    while (N > (A[ind].first-A[ind - 1].first)*(B+1-ind)) {
        N -= (A[ind].first-A[ind-1].first)*(B+1-ind);
        ind++;
    }
    for (int i = ind; i < B + 1; ++i)
        A[i] = make_pair(A[i].second, A[i].first);
    sort(A+ind, A+B+1);
    cout << A[(N+B-ind)%(B+1-ind)+ind].first;
}
