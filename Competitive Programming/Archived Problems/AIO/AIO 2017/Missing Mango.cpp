//
//  Missing Mango.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ifstream cin("manin.txt");
    ofstream cout("manout.txt");
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int pos1 = a-c;
    int pos2 = a+c;
    if (b-d == a-c || b+d==a-c) {
        cout << a-c;
        return 0;
    }
    cout << a+c;
}
