## credits to DMOJ user nathanl3
import sys
input = sys.stdin.readline

s = int(input())
n = int(input())
things = []
for i in range(n):
    b, d, c = map(int, input().split())
    things.append((b, d, c, i + 1))

def compare(x, y):
    b1, d1, c1, i1 = x
    b2, d2, c2, i2 = y
    if b1 == b2 and b1 >= s:
        return c2 - c1
    elif b1 == b2 and b1 < s:
        return d2 - d1
    else:
        return b2 - b1

things.sort(cmp=compare)

for i in range(int(input())):
    print(things[int(input()) - 1][3])
