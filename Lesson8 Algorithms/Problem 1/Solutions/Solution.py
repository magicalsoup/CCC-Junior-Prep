# python 2 code

import math
    
def isPrime(n):
    if n == 2:
        return True;
    if n <= 1:
        return False;
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    
    return True
    
n = int(raw_input())

while True:
    if isPrime(n):
        print n
        break
    n = n + 1
