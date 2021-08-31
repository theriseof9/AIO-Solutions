//
//  Atlantis Rising.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
 
int main () {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(0);
    ifstream cin("atlanin.txt");
    ofstream cout("atlanout.txt");
    int N, max=0, im;
    cin >> N;
    int arr[N], res = N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if (arr[i] > max) {
            max = arr[i];
            im = i;
        }
    }
    int cm = 0;
    for (int i = 0; i < im; i++) {
        if (arr[i] >= cm) {
            res -= 1;
            cm = arr[i];
        }
    }
    cm = 0;
    for (int i = N-1; i >= im; i--) {
        if (arr[i] >= cm) {
            res -= 1;
            cm = arr[i];
        }
    }
    cout << res;
}
