//
//  Carmen Sanfrancisco.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
 
int nx[501], f;
vector<int> modes[501][1001];
 
int main() {
    ifstream cin("wherein.txt");
    ofstream cout("whereout.txt");
    int N, M, K, ck[501];
    cin >> N >> M;
    for (int i = 1; i <= N; i++) ck[i] = 1;
    for (int i = 1; i <= M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        modes[a][c].push_back(b);
        modes[b][c].push_back(a);
    }
    cin >> K;
    for (int a = 0; a < K; a++) {
        int tmp;
        cin >> tmp;
        for (int i = 1; i <= N; i++) {
            if (ck[i]) {
                for (int j = 0; j < modes[i][tmp].size(); j++) {
                    nx[modes[i][tmp][j]] = 1;
                }
            }
        }
        
        for (int i = 1; i <= N; i++) {
            ck[i] = nx[i];
            nx[i] = 0;
        }
    }
    for (int i = 1; i <= N; i++) {
        if (ck[i]) {
            f = 1;
            cout << i << "\n";
        }
    }
    
    if (f == 0) cout << "Impossible\n";
}
