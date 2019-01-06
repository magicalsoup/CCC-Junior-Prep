# python 2 code
s = map(int, raw_input().split())

n = s[0]
x = s[1]

t = map(int, raw_input().split())

array = []
cnt = 0

for num in t:
    array.append(num)

for i in range (n):
    for j in range(i + 1, n):
        for k in range(j + 1, n):
            temp = []
            temp.append(array[i])
            temp.append(array[j])
            temp.append(array[k])
            temp.sort()
            if temp[1] == x:
                cnt +=1
print cnt
