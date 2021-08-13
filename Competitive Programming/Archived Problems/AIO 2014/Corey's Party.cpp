//
//  Done in python
//
//  Corey's Party.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

inf = open("partyin.txt", "r")
ouf = open("partyout.txt", "w")
adj = [set() for _ in range(1003)]
degree = [-1]*1003
valid = [1]*1003
N, M, A, B = map(int, inf.readline().split())
def eliminate(u):
    global degree
    global adj
    for c in adj[u]:
        degree[c] -= 1
        adj[c].remove(u)
    adj[u] = set()
    degree[u] = -1
 
b = N-B-1
for _ in range(M):
    x, y = map(int, inf.readline().split())
    adj[x].add(y)
    adj[y].add(x)
for i in range(1, N+1):
    degree[i] = len(adj[i])
for i in range(1, N+1):
    for j in range(1, N+1):
        if valid[j] and (degree[j]<A or degree[j]>b):
            print(j)
            b -= 1
            valid[j] = 0
            eliminate(j)
ans = 0
for i in range(1, N+1):
    if degree[i]!=-1:
        ans += 1
print(adj)
print(degree)
ouf.write(str(ans))
