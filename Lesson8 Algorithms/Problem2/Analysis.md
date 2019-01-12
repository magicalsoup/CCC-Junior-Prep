# Analysis
> this problem requires you to implement an greedy solution    
> we first sort the scores by their ```hours required to increase the score``` and its ```minimum score value```     
> you should create your own ```class``` to sort it    
> then if we are under ```K```, then for each test:      
> we try to fill up to the maximum score possible      
> if the maximum score is over ```K```, then just find how many hours is needed to reach ```K```
> ## Time Complexity
>> it requires ```O(N log(N)) to sort the list then O(N) time to iterate through the list, so the final time complexity is ```O(N log(N))
>> this will run under the time limit

> ## Memory Limit
>> An array of integers will pass under the memory limit

> ## Data Types
>> An long data type is required for this problem
