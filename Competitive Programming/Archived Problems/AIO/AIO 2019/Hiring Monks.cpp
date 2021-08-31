//
//  Hiring Monks.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
int main () {
    ifstream cin("hirein.txt");
    ofstream cout("hireout.txt");
    int N, S, M;
    cin >> N;
    int mk[N];
    for (int i = 0; i < N; i++) cin >> mk[i];
    cin >> S;
    int sj[S];
    for (int i = 0; i < S; i++) cin >> sj[i];
    cin >> M;
    int mj[M];
    for (int i = 0; i < M; i++) cin >> mj[i];
    sort(mk, mk+N, greater<int>()) ;
    sort(mj, mj+M, greater<int>()) ;
    int jb = 0;
    int res = 0;
    for (int i = 0; i < N; i ++) {
        while (jb < M && mj[jb] > mk[i]) jb++;
        if (jb == M) break;
        res++; jb++;
    }
    sort(mk, mk+N) ;
    sort(sj, sj+S) ;
    jb = 0;
    for (int i = 0; i < N; i ++) {
        while (jb < S && sj[jb] < mk[i]) jb++;
        if (jb == S) break;
        res++; jb++;
    }
    cout << min(N, res);
}
