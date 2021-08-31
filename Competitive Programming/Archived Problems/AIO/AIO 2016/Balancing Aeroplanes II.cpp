//
//  Done in python
//
//  Balancing Aeroplanes II.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

inf = open("balancein.txt", "r")
ouf = open("balanceout.txt", "w")
N = int(inf.readline())
s = list(map(int, inf.readline().split()))
ans = 0
l = 0
r = N - 1
while l < r:
    if s[l] > s[r]:
        r -= 1
        s[r] += s[r+1]
        ans += 1
    elif s[l] < s[r]:
        l += 1
        s[l] += s[l-1]
        ans += 1
    else:
        r -= 1
        l += 1
ouf.write(str(ans))
inf.close()
ouf.close()
