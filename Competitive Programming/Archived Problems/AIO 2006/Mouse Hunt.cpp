//
//  Done in python
//
//  Mouse Hunt.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

/*
inf = open("mousein.txt", "r")
ouf = open("mouseout.txt", "w")
x = []
y = []
for _ in range(8):
    a, b = map(int, inf.readline().split())
    x += [a]
    y += [b]
 
c1 = [min(x), min(y)]
c2 = [min(x), max(y)]
c3 = [max(x), min(y)]
c4 = [max(x), max(y)]
 
for i in range(8):
    if [x[i], y[i]] not in [c1, c2, c3, c4]:
        # i want to die
        if x[i] == max(x):
            ouf.write("E")
            break
        elif x[i] == min(x):
            ouf.write("W")
            break
        elif y[i] == max(y):
            ouf.write("N")
            break
        elif y[i] == min(y):
            ouf.write("S")
            break
inf.close()
ouf.close()
*/
