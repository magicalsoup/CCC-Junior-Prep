array = [100, 234, 23, 1230, 90, 234, 44, 21, 420];
isSorted = False;
while isSorted == False:
    isSorted = True;
    for i in range (len(array) - 1):
        if(array[i] > array[i + 1]):
            temp = array[i]
            array[i] = array[i + 1]
            array[i + 1] = temp
            isSorted = False;

for i in array:
    print i,
