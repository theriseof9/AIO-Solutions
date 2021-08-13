//
//  Done in python
//
//  Pirates.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

inf = open("piratein.txt", "r")
ouf = open("pirateout.txt", "w")
inp = []
for _ in range(3):
    inp += [int(inf.readline())]
l, x, y = inp
ouf.write(str(min(y+x, l-x+l-y)))
inf.close()
ouf.close()

