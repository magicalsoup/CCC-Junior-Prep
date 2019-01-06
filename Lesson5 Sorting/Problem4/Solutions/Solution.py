# python 2 code
= int(raw_input())
array = []
x = map(int, raw_input().split())
for num in x:
    array.append(num)
for num in array:
    print num,
print
isSorted = False
while isSorted == False:
    isSorted = True
    for i in range (l - 1):
        if array[i] > array[i + 1]:
            temp = array[i]
            array[i] = array[i + 1]
            array[i + 1] = temp
            isSorted = False
            for num in array:
                print num,
            print
