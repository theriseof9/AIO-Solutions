//
//  Done in python
//
//  Frog.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

/*
with open("frogin.txt", "r") as inf:
    nums = [int(i) for i in inf.read().split()]
n = nums.pop(0)
min_pre = [0] * n
min_pre[0] = 1000000
for i in range(1, n):
    min_pre[i] = min(nums[i - 1], min_pre[i - 1])
min_post = [0] * n
min_post[n-1] = 1000000
for i in range(n - 2, -1, -1):
    min_post[i] = min(nums[i + 1], min_post[i + 1])
with open("frogout.txt", "w") as ouf:
    ouf.write(str(max((nums[i] - min_pre[i]) + (nums[i] - min_post[i]) for i in range(1, n - 1) if min_pre[i] < nums[i] > min_post[i])))
*/
