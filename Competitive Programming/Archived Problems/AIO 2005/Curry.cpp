//
//  Done in python
//
//  Curry.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

/*
inf = open("curryin.txt", "r")
ouf = open("curryout.txt", "w")
 
c, r, v = map(int, inf.readline().split())
cr, cv, rv = 0, 0, 0
 
while max(c, r, v) != sum([c, r, v]):
    if min(c, r, v) == c:
        c += 1
        rv += 1
    elif min(c, r, v) == r:
        r += 1
        cv += 1
    else:
        v += 1
        cr += 1
    c -= 1
    r -= 1
    v -= 1
 
ouf.write(" ".join(list(map(str, [rv, cv, cr]))))
ouf.close()
inf.close()
*/
