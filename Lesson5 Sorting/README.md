# Welcome to Lesson # 5!

> Here I'm going to talk about [bubble sort](https://en.wikipedia.org/wiki/Bubble_sort) and sorting with objects

> ## Bubble Sort
>> Bubble sort is a not really efficient sorting algorithm, but it can be applied to many problems with low bounds, it was used in a cco   
>> question [CCC 1996 Problem 1](https://wcipeg.com/problem/ccc96s2p1), so I highly suggest you learning it

>> ## How does it work?
>>> Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.   
>>>  it has to go through the entire array each time, and it does it for N times, so the time complexity is **O(N * N)** or **O(N ^ 2)**
>>> Geeks for Geeks provides a better explanation, I suggest you read it. [Bubble Sort](https://www.geeksforgeeks.org/bubble-sort/)   
>>> Lets implement the above algorithm
>> ## Pseudo Code Implementation
>>> ```
>>> array = []
>>> isSorted = false
>>> while isSorted is false:
>>>   isSorted = true
>>>   for i in range length of array - 1
>>>     if array[i] > array[i + 1]
>>>     temp = array[i]
>>>     array[i] = array[i + 1]
>>>     array[i + 1] = temp
>>>     isSorted = false
>>> ```


> ## Sorting With Objects
>> When we sort an object, we need its own comparator, as the language doesn't know how to sort your objects
>> you just implement a comparator in your object class or when you call sort
>> ## Examples
>> ## Python
>>> ``` python
>>> class Student:
>>>     def __init__(self, name, grade, age):
>>>         self.name = name
>>>         self.grade = grade
>>>         self.age = age
>>>     def __repr__(self):
>>>        return repr((self.name, self.grade, self.age))
>>> ```
>>> or
>>> ``` python
>>> sorted(student_objects, key=lambda student: student.age)   # sort by age
>>> ```
>> ## Java
>>> ```java
>>> static class Test implements Comparator<Test>{
>>>    int from, to;
>>>    public Test(int from, int to){
>>>        this.from = from;
>>>        this.to = to;
>>>    }
>>>    public int compareTo(Test t){
>>>        if(to == t.to){
>>>          return from - t.from;
>>>        }
>>>        return to - t.to;
>>>    }
>>> }
>>>```
>>> or
>>> ```java
>>>	Arrays.sort(array, new Comparator<T>() {
>>>	  @Override
>>>		public int compare(T t1, T t2) {
>>>			return t1.a - t2.a;
>>>		}
>>>	});
>>> ```
>> ## C++
>>> ``` cpp
>>> struct T{
>>>   int a;
>>> }
>>> bool cmp(T t1, T t2){
>>>   return t1 < t2;
>>> }
>>> int main(){
>>>   T array[100];
>>>   sort(t, t + 100, cmp);
>>> }
>>> ```
> I have some problems for you, go to the problems folder after you finish reading this lesson


