//
//  Done in python
//
//  Cloud Cover.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.

/*
inf = open("cloudin.txt","r");
ouf = open("cloudout.txt","w")
 
N, K = map(int, inf.readline().split())
distList = []
for i in range(N-1):
    distList += [int(inf.readline())]
 
minDist = sum(distList[0:K])
oldDist = minDist
 
for i in range(N-K-1):
    newDist = oldDist-distList[i]+distList[i+K]
    if newDist < minDist:
        minDist = newDist
    oldDist = newDist
 
ouf.write(str(minDist))
ouf.close()
inf.close()
*/
