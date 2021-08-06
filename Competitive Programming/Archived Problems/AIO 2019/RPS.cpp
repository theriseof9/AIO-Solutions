//
//  RPS.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
int main() {
    ifstream cin("rpsin.txt");
    ofstream cout("rpsout.txt");
    int N, ra, pa, sa, rb, pb, sb;
    cin >> N >> ra >> pa >> sa >> rb >> pb >> sb;
    int w1 = min(ra,pb), w2 = min(pa,sb), w3 = min(sa,rb);
    int res = w1 + w2 + w3;
    ra -= w1, pb -= w1, pa -= w2, sb -= w2, sa -= w3, rb -= w3;
    int d1 = min(ra,rb), d2 = min(pa,pb), d3 = min(sa,sb);
    ra -= d1, rb -= d1, pa -= d2, pb -= d2, sa -= d3, sb -= d3;
    cout << res-(rb+pb+sb);
}
