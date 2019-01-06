
freq = {}
nums = []
a = int(raw_input())

x = map(int, raw_input().split())

for num in x:
    nums.append(num)
    
MAX = 0
nums.sort()

for num in x:
    if num not in freq:
        freq[num] = 1
    else :
        freq[num] +=1
    MAX = max(freq[num], MAX)

for num in nums:
    if freq[num] == MAX:
        print num
        break
        
