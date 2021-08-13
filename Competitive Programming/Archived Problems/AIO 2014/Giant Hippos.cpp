//
//  Done in python
//
//  Giant Hippos.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

inf = open("hippoin.txt", "r")
ouf = open("hippoout.txt", "w")
 
n, h, f = map(int, inf.readline().split())
a = []
for i in range(h):
    a.append(int(inf.readline()))
if h == 1:
    if f == 1:
        ans = max(a[0]-1, n-a[0])
    else:
        ans = n-1
    ouf.write(str(ans))
    exit()
elif h == 2:
    if f == 1:
        ans = max(a[0]-1, n-a[1])
    elif f == 2:
        ans = max(a[0]-1+n-a[1], a[1]-a[0]-1)
    else:
        ans = n-2
    ouf.write(str(ans))
    exit()
elif f == 1:
    ans = max(a[0]-1, n-a[h-1])
    ouf.write(str(ans))
    exit()
b = []
c = [a[0]-1, n-a[h-1]]
for i in range(h-1):
    b.append(a[i+1]-a[i]-1)
b.sort(reverse=True)
c.sort(reverse=True)
ans = 0
ind = 0
flag = False
while ind < (f-2)//2:
    if ind >= len(b):
        flag = True
        break
    ans += b[ind]
    ind += 1
if ind == len(b):
    flag = True
if flag:
    ans += c[0] + c[1]
elif f-2*ind == 3:
    ans += max(c[0] + c[1], max(c) + b[ind])
elif f-2*ind == 2:
    ans += max(c[0] + c[1], b[ind])
 
ouf.write(str(ans))
