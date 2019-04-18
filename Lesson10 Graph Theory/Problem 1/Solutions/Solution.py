# Credit to toraora, python 3
import collections

input()
n = int(input())
g = collections.defaultdict(list)

for _ in range(n):
    a,b = [int(x) for x in input().split()]
    g[a].append(b)

visited = set()

def r(cur):
    visited.add(cur)
    for neighbor in g[cur]:
        if neighbor in visited or r(neighbor):
            return 1
    visited.remove(cur)

no_cycle = 'Y'
for v in list(g.keys()):
    if r(v):
        no_cycle = 'N'
        break

print(no_cycle)
