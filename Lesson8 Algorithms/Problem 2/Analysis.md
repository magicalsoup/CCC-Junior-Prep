# Analysis
- This problem requires you to implement an greedy solution.    
- We first sort the scores by their ```hours required to increase the score``` and its ```minimum score value```.     
- You should create your own ```class``` to sort it.    
- Then if we are under ```K```, then for each test:      
  - We try to fill up to the maximum score possible.      
  - If the maximum score is over ```K```, then just find how many hours is needed to reach ```K```.
  
## Time Complexity
- it requires **O(N log(N))** to sort the list then **O(N)** time to iterate through the list, so the final time complexity is **O(N log(N))**
this will run under the time limit.

## Data Types
- An `long` data type is required for this problem
