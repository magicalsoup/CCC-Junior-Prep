# Analysis
> After reading through the problem, the problem is asking us to sort the bebiliths by their speed, venom and claws    
> its basically asking you to create your own data structure or object and sort it according to the rules in the problem statement

> ## Time Complexity
>> since N is only as big as **50 000**, we can sort in **O(N log(N))** time, and answer each query in **O(1)** time, so the time complexity of    
>> this problem is about **O(N log(N) * Q)**, but since Q can be as big as N, its essentially **O(N^2 log(N))** time, which sums to about 
>> **3 * 10^10**, which shouldn't run in time, but this is the worst case scenario, as the sort may be **O(N)** time and Q may be smaller.    
>> If you are doubtful of doing it this way, lets see if we can improve this time limit:   
>> we have to read in the input, which is already **O(N)** time, so we can't go lower than that. If we don't sort it, we are going to run
>> into the **O(N^3)** range, so we have to sort it, and since **O(N^2 log(N))** is the best we an do, its the intended solution and it will run in time.

> ## Data Type(s)
>> Since the numbers will only be as big as **10 ^ 9**, an integer data type will suffice

> ## Memory Limit
>> We only need to keep an array of integers the size of N, which is 50 000, so 50 000 * 4 = 200 000, or about **.5 megabytes**, as we keep
>> other stuff too, so we are definetly under the memory limit.

