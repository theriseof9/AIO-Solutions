//
//  Ghost Encounters.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 7/8/21.
//

#include <bits/stdc++.h>
using namespace std;

int maxFreq(int arr[], int n) {
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;
    int max_count = 0, res = -1;
    for (auto i : hash) {
        if (max_count < i.second) {
            res = i.first;
            max_count = i.second;
        }
    }
    return res;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(0);
    ifstream cin("ghostin.txt");
    ofstream cout("ghostout.txt");
    int N, K;
    cin >> N >> K;
    int arr[N];
    for (int i = 0; i < N; i ++) {
        int a, b;
        cin >> a >> b;
        arr[i] = b-K*a;
    }
    int fq = maxFreq(arr, N), res = 0;
    for (int i = 0; i < N; i++) if (arr[i] == fq) res++;
    cout << res;
}
