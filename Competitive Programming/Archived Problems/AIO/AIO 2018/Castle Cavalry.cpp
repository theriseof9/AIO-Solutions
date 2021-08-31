//
//  Castle Cavalry.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
int c, arr[100001];
int main() {
    ifstream cin("cavalryin.txt");
    ofstream cout("cavalryout.txt");
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        int a;
        cin >> a;
        arr[a] += 1;
    }
    for (auto i:arr) {
        if (i&&i%c) {
            cout << "NO";
            return 0;
        }
        c += 1;
    }
    cout << "YES";
}
