//
//  Done in python
//
//  Safe Cracking.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

inf = open("safein.txt", "r")
ouf = open("safeout.txt", "w")
a, b = map(int, inf.readline().split())
arr1 = []
for _ in range(a):
    arr1.append(int(inf.readline()))
arr2 = []
for _ in range(b):
    arr2.append(int(inf.readline()))
arr1N = []
arr2N = []
for i in range(a):
    if i == 0:
        arr1N.append(0)
    else:
        arr1N.append(arr1[i]-arr1[i-1])
for i in range(b):
    if i == 0:
        arr2N.append(0)
    else:
        arr2N.append(arr2[i]-arr2[i-1])
arr1N = arr1N[1:]
arr2N = arr2N[1:]
res = 0
i = 0
k = 0
for i in range(a-b+1):
    if arr1N[i:i+b-1] == arr2N:
        k = arr1[i]-arr2[0]
        if k < 0:
            continue
        break
for i in arr1:
    ouf.write(str(i-k)+"\n")
inf.close()
ouf.close()
