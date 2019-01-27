# Welcome to Lesson # 9!

> Today we are going to talk about recursion! (and possibly dp)

# Recursion

> ## What is recursion?
>> Recursion: ```the repeated application of a recursive procedure or definition.```    
>> Its basically a operation/method doing the operation/method inside itself.
>> It can be seen as an operation/method, making a copy of itself and so on

> ## The Uses of Recursion
>> Recursion is used for many situations, including in ```DP (dynamic programming)```, where DP is sometimes just a more efficient version of recursion.     
>> Its used to generate cases, for example you want to know how many ways to get from the top of the grid to the bottom of the grid only with ```left```, ```right``` or ```down``` movements with obstacles in between, we can use recursion to test all the possible cases and find out how many ways are possible
>> They're going to be way more applications of recursion later on, including ```Dynamic Programming``` and ```DFS```, but this is the basis on it.

> ## How to write Recursion?
>> To write Recursion we need to first understand the problem at hand, at see how we can apply recursion to it.    
>> ### Example
>>  - You are to find the ```n```th fibnacci number
>>  - First, how can we use recursion?
>>    - We can see that the fibnacci sequence follows a pattern, where the current fibnacci number is sum of the 2 numbers before it
>>    - this can be represented as ```fib(n) = fib(n - 1) + fib(n - 2)```
>>    - now if we directly implement this, the system will give you an ```error```, as we generate an ```infinite amount``` of cases as there is no statement telling it to stop, and causing an ```memory overflow error```
>>    - to do this correctly, every recursion method has something called a ```base case```, meaning that this case is where it tells the method to stop making copies of itself or to stop the recursion/recursive action
>>    - the base case for the fibnacci sequence is the first term is either 1 or 0 (depending on the situation), so we could write ```if n == 1 or n == 0 return 1```
>>    - Now lets write a psuedo code for the fibnacci sequence and I'll explain you the steps

>>    - ```
>>      function fib(n):
>>         if n == 1 or n == 0: # this means that if the term number is 1 or 0
>>           return 1           # we return 1
>>         return fib(n - 1) + fib(n - 2) # here we return fib(n), which is equal to the 2 numbers before it fib(n - 1) and fib(n - 2)
>>      ```

>>   - So whats actually going on here?
>>   - lets draw the digram


>>  - ```
>>                                                      fib (4)
>>                                                      /
>>                                                     /
>>                                         fib(3) + fib(2)
>>                                         /          \
>>                                        /            \
>>                            fib(2) + fib(1)          fib(1) + fib(0)
>>                            /          \             /          \
>>                           /            \           /            \
>>               fib(1) + fib(0)           1         1              1
>>               /          \
>>              /            \
>>             1              1
>>
>>
>>    ```

>> - As you can see, ```fib(4)``` is defined as ```fib(3) + fib(2)```, and ```fib(3)``` is defined as ```fib(2) + fib(1)```, and ```fib(2)``` is defined as ```fib(1) + fib(0)```, and ```fib(1) and fib(0)``` is defined as ```1```, our ```base case```
>> - If we add them up, we get ```fib(4) = fib(3) = fib(2) = (1 + 1) + fib(2) = (1 + 1)```
>> - we get ```((1 + 1) + 1) + (1 + 1)``` which gives us ```5```
>> - Now implementing this is very easy, all you have to do is write the base case and recursion as shown above in the pseudo code

>> - ### Python
>>> ```py
>>> def fib(n):
>>>   if n == 1 or n == 0:
>>>     return 1
>>>   return fib(n - 1) + fib(n - 2)
>>> ```

>> - ### Java
>>> ```java
>>> static int fib(int n) {
>>>   if(n == 1 || n == 0) return 1;
>>>   return fib(n - 1) + fib(n - 2);
>>> }
>>> ```

>> - ### C++
>>> ```cpp
>>> int fib(int n){
>>>   if(n == 1 || n == 0) return 1;
>>>   return fib(n - 1) + fib(n - 2);
>>> }
>>> ```

> ## Future steps
>> Recursion is all about understanding the problem, so it varies case to case, if you understand what recursion is and what it does, you should be well off, just a bit of practice and you should get the hang of writing recursion!    
>> Remember, ```base case``` is very important


# Dynamic Programming

> ## What is Dynamic Programming?
>> Dynamic programming is essentially putting already calculated information in a place that is easily achievable for later use/calculations       
>> Dynamic programming, like recursion, is very versatile and does not have one basic form, so you have to understand it and apply it accordingly      
>> Dynamic programming uses the term ```state``` alot, it means the current best or worst condition of a situation, it will be explanied later on      
>> CCC junior shouldn't have any too crazy DP type problems, so I'll be talking about 2 basic types, the ```0-1 knapsack``` and the ```visited state dp```

> ## 0-1 knapsack
>> - The 0-1 knapsack is a type of dp when you either take the item or not, hence the name ```0-1`` 
>> - You are given a knapsack of capcity ```W```, you have ```N``` items, each with a size of ```w``` and a value of ```v```    
>> - You are to find the most valuable knapsack that you can carry

>> - This problem requires DP, as greedy won't work here, the proof is left as an exercise to the reader, or you can search it up
>> - To solve this, we need to break down the program into ```subproblems```, and build from the ```bottom up```, filling up the ```table```

>> - Let the each row represent how many items there are, and each column the size
>> - We define dp[i][j] the most value of ```i``` items with maximum size ```j```
>> - We could then do the following
>> - ```
>>   for i, 1...N:
>>     for j, 0.. W:
>>        if i == 0 or j == 0:
>>            dp[i][j] = 0
>>        else if size[i - 1] <= j:
>>            dp[i][j] = max(value[i - 1] + dp[i - 1][j - size[i - 1]], dp[i - 1][j]);
>>        else:
>>            dp[i][j] = dp[i - 1][j];
>>   ```

>> - This program is basically doing this
>> - whats better, the best value of the size j - size[i - 1] + value[i - 1] or the value above it
>> - Let the row be the number of items and the column the size
>> - Lets say we have a knapsack of capacity 6 and 6 items, the 6 items have values and size respectively of
>> - 1. 1 2
>> - 2. 1 5
>> - 3. 3 4
>> - 4. 7 6
>> - 5. 5 1
>> - 6. 2 2

>> - ## Diagram
>> - We first fill out the 0s with 0s, as you cannot fit something with a bag size of 0 or if you have no items at all

>> - |  | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
>>   |:-|:--|:--|:--|:--|:--|:--|:--|
>>   |0|0|0|0|0|0|0|0|
>>   |1|0|
>>   |2|0|
>>   |3|0|
>>   |4|0|
>>   |5|0|
>>   |6|0|

>> - Then we look at the first item, it has size of 2, so we look at the first column, which is not possible, since the item is bigger than the knapsack
>> - The we look at the second column, it has a size of 2 as well, so we see, is it better to take the previous value, which is 0 or go back 2 columns and add that value to this items value?
>> - we can see that 1 + 0 is bigger than 0, so we fill that spot 

>> - |  | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
>>   |:-|:--|:--|:--|:--|:--|:--|:--|
>>   |0|0|0|0|0|0|0|0|
>>   |1|0|0|1|
>>   |2|0|
>>   |3|0|
>>   |4|0|
>>   |5|0|

>> - We then preceed to fill out the entire first row

>> - |  | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
>>   |:-|:--|:--|:--|:--|:--|:--|:--|
>>   |0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
>>   |1 | 0 | 0 | 1 | 1 | 2 | 2 | 3 |
>>   |2 | 0 |
>>   |3 | 0 |
>>   |4 | 0 |
>>   |5 | 0 |
>>   |6 | 0 |

>> - we then repeat the progress and fill out the entire table

>> - |  | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
>>   |:-|:--|:--|:--|:--|:--|:--|:--|
>>   |0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
>>   |1 | 0 | 0 | 1 | 1 | 2 | 2 | 3 |
>>   |2 | 0 | 0 | 0 | 0 | 0 | 2 | 3 |
>>   |3 | 0 | 0 | 0 | 0 | 3 | 3 | 3 | 
>>   |4 | 0 | 0 | 0 | 0 | 0 | 0 | 7 |
>>   |5 | 0 | 5 |10 |15 |20 |25 |30 |
>>   |6 | 0 | 5 |10 |15 |20 |25 |30 |

>> - as we can see from the table, by including N items and having a weight of W, so dp[n][w], which is dp[6][6], we can achieve an answer of 30, thus that is the answer to this problem!

>> - For more information of above, you could go to this [link](https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/)
>> - There is going to be challenge question will you have to modify this, since 2D dp takes way to much space, we can do knapsack dp using 1D
>> - All we have to do is keep track of the previous row, and nothing more, the following idea can be implemented like this

>> - ```
>>   for i, 1.. N:
>>      for j, W, j >= wt[i], j--:
>>        dp[j] = max(dp[j], dp[j - wt[i]] + v[i])
>>   ```

>> wt is the array of the size/weight and v is the array of the values
>> - The proof is left as an exercise to the reader, to better visualize it, you may want to draw out of what the program is doing

>> - Example Programs for 2D and 1D dp
>> - ### Python

>>> ```py
>>> # 2D
>>> for i in range(N):
>>>   for j in range(W):
>>>       if i == 0 or j == 0:
>>>           dp[i][j] = 0
>>>       else if wt[i] <= j:
>>>           dp[i][j] = max(v[i] + dp[i][j - wt[i]], dp[i - 1][j]);
>>>       else:
>>>           dp[i][j] = dp[i - 1][j];
>>>
>>> # 1D
>>> for i in range(N):
>>>   for j in range(W, w[i] - 1):
>>>      dp[j] = max(dp[j], dp[j - wt[i]] + v[i]);
>>> ```

>> - ### Java
>>> ```java
>>> // 2D
>>> for(int i = 0; i < N; i++){
>>>     for(int j = 0; j < W; j++) {
>>>        if( i == 0 || j == 0)
>>>           dp[i][j] = 0;
>>>        else if (wt[i] <= j)
>>>           dp[i][j] = Math.max(v[i] + dp[i][j - wt[i]], dp[i - 1][j]);
>>>        else
>>>           dp[i][j] = dp[i - 1][j];
>>>     }
>>> }
>>>
>>> // 1D
>>> for(int i = 0; i < N; i++){
>>>     for(int j = W; j >= wt[i]; j--){
>>>        dp[j] = Math.max(dp[j], dp[j - wt[i]] + v[i]);
>>>     }
>>> }
>>> ```

>> - ### C++
>>> ```cpp
>>> // 2D
>>> for(int i = 0; i < N; i++){
>>>     for(int j = 0; j < W; j++) {
>>>        if( i == 0 || j == 0)
>>>           dp[i][j] = 0;
>>>        else if (wt[i] <= j)
>>>           dp[i][j] = max(v[i] + dp[i][j - wt[i]], dp[i - 1][j]);
>>>        else
>>>           dp[i][j] = dp[i - 1][j];
>>>     }
>>> }
>>>
>>> // 1D
>>> for(int i = 0; i < N; i++){
>>>     for(int j = W; j >= wt[i]; j--){
>>>        dp[j] = max(dp[j], dp[j - wt[i]] + v[i]);
>>>     }
>>> }
>>> ```

> ## Visited DP






