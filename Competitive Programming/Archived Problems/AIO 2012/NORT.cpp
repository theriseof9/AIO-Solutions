//
//  Done in python
//
//  NORT.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

inf = open("nortin.txt", "r")
ouf = open("nortout.txt", "w")
w, h = map(int, inf.readline().split())
ouf.write(str(w*h) if not w*h%2 else str(w*h-1))
