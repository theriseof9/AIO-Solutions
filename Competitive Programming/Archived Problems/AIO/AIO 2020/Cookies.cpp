//
//  Cookies.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(0);
    ifstream cin("cookiesin.txt");
    ofstream cout("cookiesout.txt");
    double D, C0, P1, C1, P2, C2;
    cin >> D >> C0 >> P1 >> C1 >> P2 >> C2;
    int a = max((C0+C1)*D-P1-ceil(P1/C0)*C1, (C0+C2)*D - P2 - ceil(P2/C0)*C2);
    int b = (C0+C1+C2)*D-P1 - ceil(P1/C0)*(C1+C2)- P2 - ceil((P1+P2-C0*ceil(P1/C0))/(C0+C1))*C2;
    int c = (C0+C1+C2)*D - P2 - ceil(P2/C0)*(C1+C2)- P1 - ceil((P1+P2-C0*ceil(P2/C0))/(C0+C2))*C1;
    int d = C0*D;
    cout << max(max(a, b), max(c, d));
}
