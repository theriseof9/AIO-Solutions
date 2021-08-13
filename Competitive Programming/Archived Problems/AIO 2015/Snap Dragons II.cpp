//
//  Done in python
//
//  Snap Dragons II.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

file = open("snapin.txt", "r")
r, c, rose_r, rose_c, scar_r, scar_c = file.readline().split()
file.close()
 
file = open("snapout.txt", "w")
 
if (int(rose_r)-int(scar_r) + int(rose_c)-int(scar_c)) % 2 == 0:
    file.write("SCARLET")
else:
    file.write("ROSE")
file.close()
