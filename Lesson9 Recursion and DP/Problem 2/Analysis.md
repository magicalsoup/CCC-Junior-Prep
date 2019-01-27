# Analysis
> We can see that this is an ```arithmetic sum``` problem, and can be easily solved with the formula, but we are practicing recursion here, so its best to use recursion      
> The recurrence is very easy, for ```f(n)```, it is equal to itself plus the number before it    
> so it can be represented as ```f(n) = n + f(n - 1)```, and we can just directly implement this with a ```base case``` of 0 where its just 0

> ```
> function aritmetic(n):
>   if n == 0:
>      return 0
>   return n + aritmetic(n - 1)
> ```

> ## Time Complexity
>> This is an **O(N<sup>2</sup>)** time complexity problem, but with the low bounds, it will run in time

> ## Space Complexity
>> This has an **O(N<sup>2</sup>)** space complexity, but with the low bounds, it doesn't matter too much
