# Welcome To Lesson #2!
## Binary Search
> its a powerful sorting algorithm that can find objects in sub - linear time --> **O (log(n)) time, where n is the size of the array   
> its used alot in competitve programming and as well in softwares and games
> I will be focusing on the implementation and how it works
> ## How does it work??
>> ### Necessary Prerequisites: the array **must be sorted**
>> ### Algorithm:
>>> it picks a pivot / mid point, at the middle index of the **current** array, let l and r be the left and right indexes of the array,
>>> meaning l is the most left index of the array and r is the most right index of the array, the mid point is the average of these 2 indexes
>>> then it compares that mid point value to the value you want to find, lets call the value you want to find as 'key'   
>>> then if the key is bigger, so the right half of the previous array, now this is the new array
>>> if the key is smaller, the array shrinks to the left half of the previous array, now this is the new array
>>> this continues until you find the element or the left index is bigger than the right index

>> ## Time Complexity
>>> as you can see, the array we search cuts by half everytime, so the time complexity of this algorithm is 1/2 + 1/4 + 1/8... + 1/(n/2), or
>>> **log(n)** time,   
>>> which is very fast for a search algorithm, this is indefintely faster than the **O(n)** time naive search algorithm,    
>>> where we search every single element.    
>>> but since we do have to sort the array, which most languages uses a version of **mergesort** which has
>>> a time complexity of **O(n log(n))**,   
>>> so the time complexity of this algorithm is actually **O(n log(n) + log(n))** which is **O(n log (n))**

> ## Pseudo code:
>> a pseudo implementation of the above algorithm
>> ```
>> list = []
>> key = random variable
>> sort(list)
>> left = 0, right = list.length - 1
>> while left <= right:
>>   mid = (left + right) / 2
>>   if list[mid] equals key 
>>      break;
>>   else if list[mid] > key
>>      right = mid - 1
>>   else if list[mid] < key
>>      left = mid + 1;
>> ```

> ## Practice!
>> I have some problems and an implementation of binary search for you, go complete them!   
>> ### Good Luck!
