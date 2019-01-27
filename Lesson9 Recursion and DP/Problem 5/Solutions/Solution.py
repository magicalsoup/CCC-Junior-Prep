# python 2 code
x = map(int, raw_input().split())
a = x[0]
b = x[1]
c = x[2]
dp = {}

for i in range(c + 1):
    dp[i] = 0
    
dp[0] = 1
for i in range(0, c + 1):
    if dp[i] == 1:
        if i + a <= c:
            dp[i + a] = 1
        if i + b <= c:
            dp[i + b] = 1
            
for i in reversed(range(0, c + 1)):
    if dp[i] == 1:
        print i
        break
