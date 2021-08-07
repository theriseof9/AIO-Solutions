//
//  main.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("debtsin.txt");
    ofstream cout("debtsout.txt");
    int N, M = 0;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) cin >> arr[i];
    for (int i = 1; i < N; i++) arr[i] += arr[i-1];
    for (int i = 0; i < N; i++) if (arr[M] < arr[i]) M = i;
    cout << (M+1)%N+1;
}
