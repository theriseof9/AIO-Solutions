//
//  Ladybugs.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream cin("ladyin.txt");
    ofstream cout("ladyout.txt");
    int lines;
    cin >> lines;
    int bugs[lines];
    for (int i = 0; i < lines; i ++) cin >> bugs[i];
    
    int min = INT_MAX;
    int max = INT_MIN;
 
    for (int i = 0; i < lines; i ++){
        if(bugs[i]<min) min = bugs[i];
        if(bugs[i]>max) max = bugs[i];
    }
    cout << max-min+1;
}
