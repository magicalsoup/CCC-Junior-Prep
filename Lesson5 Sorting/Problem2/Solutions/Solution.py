# python 2 
array = []
n = int(raw_input())

for i in range (n):
    array.append(int(raw_input()))
isSorted = False
while isSorted == False:
    isSorted = True;
    for i in range (len(array) - 1):
        if(array[i] > array[i + 1]):
            temp = array[i]
            array[i] = array[i + 1]
            array[i + 1] = temp
            isSorted = False;

for i in array:
    print (i)
