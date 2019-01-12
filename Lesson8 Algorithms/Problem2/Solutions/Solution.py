class Test:
    def __init__(self, score, hour):
        self.score = score
        self.hour = hour
    def __lt__(self, other):
        if self.hour == other.hour:
            return other.hour > self.hour
        return self.hour < other.hour

n, m, k = map(int, raw_input().split())
cnt = 0
t = []
for i in range (n):
    x, y = map(int, raw_input().split())
    t.append(Test(x, y))
    cnt += t[i].score


    
ans = 0
t.sort()
for i in range (n):
    if cnt + (m - t[i].score) <= n * k:
        ans += (m - t[i].score) * t[i].hour
        cnt += (m - t[i].score)
    else:
        ans += t[i].hour * (n * k - cnt)
        break

if ans < 0:
    print 0
else:
    print ans
