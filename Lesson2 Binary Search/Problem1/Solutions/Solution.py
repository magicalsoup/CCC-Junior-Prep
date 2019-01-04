
key = int(input())
left = 1
right = 1000000000
guesses = 0
while left <= right:
  mid = int((left + right) / 2)
  
  if mid == key:
    break
  
  elif mid > key:
    right = mid - 1
    
  elif mid < key:
    left = mid + 1

  guesses = guesses + 1
  
guesses = guesses - 1
money = 1000000 - guesses * 1000
message = 'Bob can get ${}'
print (message.format(money))
