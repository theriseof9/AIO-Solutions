//
//  Done in python
//
//  Invasion.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

/*
inf = open('invin.txt', 'r')
ouf = open('invout.txt', 'w')
 
r, c = map(int, inf.readline().split())
 
mp = []
for i in range(r):
    mp += [inf.readline().strip()]
 
b = {}
 
for i in range(r):
    for j in range(c-1):
        c1 = mp[i][j]
        c2 = mp[i][j+1]
        if c1 != c2:
            if c1 not in b:
                b[c1] = [c2]
            if c2 not in b:
                b[c2] = [c1]
            if c1 not in b[c2]:
                b[c2] += [c1]
            if c2 not in b[c1]:
                b[c1] += [c2]
 
for j in range(c):
    for i in range(r-1):
        c1 = mp[i][j]
        c2 = mp[i+1][j]
        if c1 != c2:
            if c1 not in b:
                b[c1] = [c2]
            if c2 not in b:
                b[c2] = [c1]
            if c1 not in b[c2]:
                b[c2] += [c1]
            if c2 not in b[c1]:
                b[c1] += [c2]
 
answer = 0
for key in b:
    answer = max(answer, len(b[key]))
 
ouf.write(str(answer))
inf.close()
ouf.close()
*/
