//
//  Done in python
//
//  Archery.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

inf = open('archin.txt','r')
ouf = open('archout.txt','w')
n,a,b=map(int, inf.readline().split())
ouf.write(str(max(a+b-n,1))+' '+str(min(a+b-1,n)))
