# Analysis
- After reading through the problem, the problem is asking us to sort the bebiliths by their speed, venom and claws    
- its basically asking you to create your own data structure or object and sort it according to the rules in the problem statement

## Time Complexity
- since N is only as big as **50 000**, we can sort in **O(N log(N))** time, and answer each query in **O(1)** time, so the time complexity of 
- this problem is about **O(N log(N) + Q)**, its essentially **O(N log(N))** time, which sums to about    
-  **200 000**, so it will definitely run in time

## Data Type(s)
- Since the numbers will only be as big as **10 ^ 9**, an integer data type will suffice

## Memory Limit
- We only need to keep an array of integers the size of N, which is 50 000, then we have 3 different objects with a single element, each
- with 4 bytes, so in total we have 50 000 * 4 * 4 * 4, or about **3.2 megabytes** so we are under the memory limit.    
- Please keep in mind that java uses memory in other stuff like variables, sorting and stuff, so your total memory might be around **30 megabytes**, but nonetheless, its still under the memory limit.

