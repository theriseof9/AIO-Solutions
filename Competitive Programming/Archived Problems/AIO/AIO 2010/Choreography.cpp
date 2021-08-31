//
//  Done in python
//
//  Choreography.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

inf = open("dancein.txt", "r")
ouf = open("danceout.txt", "w")
d, t = map(int, inf.readline().split())
a = [0 for i in range(d)]
res = 0
for i in range(t):
    x, y = map(int, inf.readline().split())
    x -= 1
    y -= 1
    if a[x] == 0:
        a[x] += 1
        res += 1
    a[x] -= 1
    a[y] += 1
ouf.write(str(res))
