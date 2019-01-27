# Analysis
> This is a string recursion problem!   

> This might be a bit hard, but its really not, we can look at it this way:

> We start with the original string, then cut off the 1st character each time we recursion it, in java we can use the method ```.substring()```

> Other languages provide similar methods like c++ 's ```.substr()```

> then we just have to check if the first character equals the second character. 

> If it is, then return the first character + the ```*``` plus the rest of the recursion string

> if not, return the the first character plus the rest of the cursion string

> We have a ```base case``` where the if the string's ```length``` is smaller than 2, then we just return the string itself

> ```
> function pairStar(str) {
>   if str.length < 2:
>     return str
>   if str.charAt(0) == str.charAt(1):
>     return str.charAt(0) + "*" + pairStar(str.substring(1))
>   return str.charAt(0) + pairStar(str.substring(1))
> ```

> ## Time Complexity
>> This runs in **O(N<sup>2</sup>)** time, but it will pass in time

> ## Space Complexity
>> This has a space complexity of **O(N<sup>2</sup>), but it will be fine
