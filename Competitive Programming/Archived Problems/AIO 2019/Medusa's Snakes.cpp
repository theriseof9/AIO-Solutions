//
//  Medusa's Snakes.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
bool ok(long long k, long long n, string s) {
    if (k*5>n) return false;
    char curr = 'S';
    int currCnt = 0, currInd = 0;
    char currCntArr[] = {'S', 'N', 'A', 'K', 'E'};
    for (int i = 0; i < n; i ++) {
        currCnt += s[i]==curr;
        if (currCnt >= k) {
            if (curr == 'E') return true;
            currInd += 1;
            curr = currCntArr[currInd];
            currCnt = 0;
        }
    }
    return false;
}
 
int main() {
    ifstream cin("snakein.txt");
    ofstream cout("snakeout.txt");
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(0);
    long long n;
    string s;
    cin >> n >> s;
    long long high = n, low = 1, k;
    while (low < high) {
        k = (high+low)/2;
        if (!ok(k, n, s)) {
            high = k;
        } else {
            low = k+1;
        }
    }
    cout << low-1;
}
