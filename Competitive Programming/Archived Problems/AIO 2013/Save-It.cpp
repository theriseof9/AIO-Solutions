//
//  Done in python
//
//  Save-It.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

infile = open("savein.txt", "r")
outfile = open("saveout.txt", "w")
n = int(infile.readline())
a = []
b3 = []
b4 = []
for i in range(n):
    a.append(int(infile.readline()))
ans = 0
for i in range(n):
    ma = a[i]%5
    if ma == 0 or ma == 1 or ma == 2:
        ans += a[i] - a[i] % 5
    elif ma == 3:
        b3.append(a[i])
    else:
        b4.append(a[i])
ind = 0
b3len = len(b3)
b4len = len(b4)
while ind < min(b3len, b4len):
    ans += b3[ind]+b4[ind]-2
    ind += 1
if b3len > ind:
    for i in range(ind, b3len, 2):
        if i > b3len-2:
            break
        ans += b3[i]+b3[i+1] - 1
    if (b3len - ind)%2==1:
        ans += b3[-1]+2
else:
    for i in range(ind, b4len, 3):
        if i > b4len-3:
            break
        ans += b4[i] + b4[i+1] + b4[i+2] - 2
    tp = b4len - ind
    if tp % 3 != 0:
        ans += b4[-1] + 1
    if tp % 3 == 2:
        ans += b4[-2] + 1
outfile.write(str(ans))
