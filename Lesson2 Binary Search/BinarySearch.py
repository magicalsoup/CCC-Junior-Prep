array = [1, 396, 99, 84, 33, 75, 9073]
array.sort()

key = 396

left = 0
right = len(array) - 1
found = False

while left <= right:
  mid = int((left + right) / 2)
  if array[mid] == key:
    print("Key found at index", mid)
    found = True;
    break;
  
  elif array[mid] > key:
    right = mid - 1
    
  elif array[mid] < key:
    left = mid + 1


if found == False:
  print("key not found in the array")
