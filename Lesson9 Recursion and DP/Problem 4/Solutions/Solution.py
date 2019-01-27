# submit this in pypy2, a faster version of python, but mainly this is python 2 code
# credits to dmoj user p1geon

import sys

def input():
    return sys.stdin.readline().strip()
    
c, m = map(int, input().split())
cages = [list(map(int, input().split())) for i in xrange(c)]
cost = [0]*(m + 1)
for i in xrange(1, c + 1):
    for j in reversed(xrange(cages[i - 1][0], m + 1)):
        cost[j] = max(cost[j], cages[i - 1][1] + cost[j - cages[i - 1][0]])
print cost[m]
