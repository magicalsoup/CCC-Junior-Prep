# python 2 code
n = int(raw_input())
for _ in range(n):
  l = int(raw_input())
  array = []
  x = map(int, raw_input().split())
  for num in x:
    array.append(num)
  swaps = 0
  isSorted = False
  while isSorted == False:
    isSorted = True
    for i in range (l - 1):
      if array[i] > array[i + 1]:
        temp = array[i]
        array[i] = array[i + 1]
        array[i + 1] = temp
        swaps = swaps + 1
        isSorted = False
  print "Optimal train swapping takes", swaps, "swap(s)."
