//
//  Done in python
//
//  Island.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

inf = open("islandin.txt", "r")
ouf = open("islandout.txt", "w")
N, L = map(int, inf.readline().split())
if N == 0 or L == 0:
    ouf.write("0");
    exit()
pos = []
ps = [0]*200005
total = 0
for i in range(N):
    a, b = map(int, inf.readline().split())
    a -= 1
    pos += [(a, b)]
    ps[i] = b
    total += b
for i in range(N):
    pos += [(pos[i][0]+4*L, pos[i][1])];
    ps[N+i] = pos[i][1]
r = [0]*2*N
for i in range(1, 2*N): ps[i] += ps[i-1]
l = [pos[0][0]*pos[0][1]]
for i in range(1, 2*N): l += [l[i-1]+pos[i][0]*pos[i][1]]
r[2*N-1] = (8*L-pos[2*N-1][0])*pos[2*N-1][1];
for i in range(2*N-2, -1, -1): r[i] = r[i+1]+(8*L-pos[i][0])*pos[i][1]
ans = 9999999999999999999999
lp = 0;
for i in range(2*N):
    while lp < N and pos[lp][0]+2*L<pos[i][0]: lp+=1
    g, f = 0, 0
    if lp > 0: g = ps[lp-1]
    if i > 0: f = ps[i-1]
    ans = min(ans, l[lp+N-1] - l[i] - (ps[lp+N-1]-ps[i]) * pos[i][0] + r[lp] - r[i] - (f - g) * (8*L - pos[i][0]));
ouf.write(str(2*L*total-ans))
inf.close()
ouf.close()
