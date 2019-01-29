# Analysis
> This is a optimized brute force type question, you need to figure out an important property of ```factors``` and prime numbers

> A prime number only has 2 factors, 1 and itself, and since we don't need to check up to ```N```

> Proof: let ```N``` be a positive integer, ```A``` be one of its divisor, and ```B``` be the quotient of ```N / A```, ```N / A = B```, and ```N / B = A```, thus, its sufficient to check only one of its factors

> Therefore, we only check up to the sqrt of N, and thus making hour primality test have a time complexity of **O(&radic;N)**

> Then we loop through N to the next prime and print it out, making our time complexity around **O(N)**, as we might have to loop through alot of numbers

> # Time Complexity

>> Potientally **O(N)**, but will run in time

