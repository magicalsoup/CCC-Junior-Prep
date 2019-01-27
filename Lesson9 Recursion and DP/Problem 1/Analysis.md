# Analysis
> we can see a recurrence of the problem in a factorial, a factorial can be defined as ```n! = n * (n-1)!```, and we can just implement this with recursion, setting the ```base case``` of ```n == 1``` to 1

> ```
> function factorial(n):
>   if n == 1: # base case
>     return 1
>   return n * factorial(n - 1) # recursion
> ```

> ## Time Complexity
>> The recursion involved solves this problem in **O(N<sup>2</sup>)** time, but with the low bounds of the test cases, it would pass in a relative short amount of time

> ## Space Complexity
>> This problem uses up **O(N<sup>2</sup>)** space, but with low bounds, it won't be a problem
