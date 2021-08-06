//
//  Done in python
//
//  Sleight of Hand.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

/*
inf = open("handin.txt", "r")
ouf = open("handout.txt", "w")
n, s, k = map(int, inf.readline().split())
arr = [0]*n
arr[s-1] = 1
for i in range(k):
    a, b = map(int, inf.readline().split())
    if a < s and b >= s:
        s -= 1
    elif a == s:
        s = b
    elif a > s and b <= s:
        s += 1
ouf.write(str(s))
*/
