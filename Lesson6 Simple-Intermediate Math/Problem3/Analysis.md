# Analysis
- after reading the problem several times, its asking as to find **a, b, c** and what is the maximum score with anyone else.  
- lets construct the system of equation, **x, y, z** are the input, basically their sums.   
 ```
 a + b = x
 b + c = y
 c + a = z
 ```
- doing a little subsitution we get:
 ```
 a = (x - y + z) / 2
 b = (y - z + x) / 2
 c = (z - x + y) / 2
 ```

- after adding 10 to all of these values, we get the maximum score.

## Time Complexity
- **O(1)** time, passes time limit.
