//
//  Done in python
//
//  Probe.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

/*
inf = open("probein.txt", "r")
ouf = open("probeout.txt", "w")
_, _, rp, cp, rf, cf = map(int, inf.readline().split())
n = int(inf.readline())
 
for _ in range(n):
    x, y = map(int, inf.readline().split())
 
    if abs(rp-rf) == abs(cp-cf):
        wd = max(abs(rp-x),abs(cp-y))
        ld = max(abs(rf-x),abs(cf-y))
    else:
        wd = abs(rp-x) + abs(cp-y)
        ld = abs(rf-x) + abs(cf-y)
 
    if wd == ld:
        ouf.write("MOUNTAINS\n")
    elif wd < ld:
        ouf.write("WATER\n")
    else:
        ouf.write("LAVA\n")
 
inf.close()
ouf.close()
*/
