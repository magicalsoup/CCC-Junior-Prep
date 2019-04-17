# Solution

## Algorithm
- At a first glance, we can clearly see that this is a search problem, and the search algorithm we just learned with binary search   
- and its very efficient.

## Time Complexity 
- The input can get as big as **1000 000 000**, but it will only take about 30 guesses max     
- because **log2(1000 000 000)** is about **30**, so this will easily run in time.    
- If we do the naive **O(n) algorithm**, checking every number,    
- the worst cause is **O(1000 000 000)**, so about **1 - 2 seconds** run time, which is too slow.


## Memory Limit
- Now becareful!, because if you set an array of integers, you will easily **MLE (memory limit exceeded)**, as the limit is **8 megabytes**    
- but you will use **4000 megabytes**, because 1000 000 000 * 4 is about **4 000 000 000 bytes**, or **4000 megabytes**    
- The correct solution is to set the **left variable as 1** and **right variable as 1000 000 000**, and **mid is the number that you guess**

## Data type(s)
- The numbers here are pretty big, but they can all fit in a **32 - bit integer**, are a int in java, python and c++, 
- so we don't have to worry about overflow issues, as the maximum number is **1 billion**, and a 32 - bit integer can fit about **2.1 billion**


