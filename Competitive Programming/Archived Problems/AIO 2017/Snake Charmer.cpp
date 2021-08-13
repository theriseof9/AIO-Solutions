//
//  Done in python
//
//  Snake Charmer.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.

 inf = open("snakein.txt","r")
 ouf = open("snakeout.txt","w")
  
 x, y = map(int, inf.readline().split())
 d = 0
 res = []
 while x or y:
     d %= 4
     if d == 0:
         if x < 0:
             res.append("L")
             x += 1
             d -= 1
         else:
             res.append("R")
             x -= 1
             d += 1
     elif d == 1:
         if y < 0:
             res.append("R")
             y += 1
             d += 1
         else:
             res.append("L")
             y -= 1
             d -= 1
     elif d == 2:
         if x < 0:
             res.append("R")
             x += 1
             d += 1
         else:
             res.append("L")
             x -= 1
             d -= 1
     else:
         if y < 0:
             res.append("L")
             y += 1
             d -= 1
         else:
             res.append("R")
             y -= 1
             d += 1
 ouf.write("".join(res))
 ouf.close()
 inf.close()

