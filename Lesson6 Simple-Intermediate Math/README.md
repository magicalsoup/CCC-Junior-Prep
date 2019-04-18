# Welcome To Lesson #6!
- Today we are going to talk about some math knowledge!

## Mean, median and Mode
### Mean
- The mean is the average of a list:
``` 
1 2 3 4 5 6 7 8 9 10
```
- Average = sum of numbers divided by the # of numbers.
- Sum = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = ``` 55 ```.
- The # of numbers is ``` 10 ```, as there are 10 numbers, so the average is 55 / 10 = ``` 5.5 ```.
#### Pseudo code for getting the mean
```
sum = 0
for element in array
   sum += element
mean = sum / numberOfNumbers
```

### Median
- Takes the middle 1 or 2 numbers, from a sorted list if the length of the list is even, take the 2 numbers and take the average:    
``` 1 2 3 4 5 6 7 8 9 10 ```
- As you can see, the list is already sorted, since the length is even, we take the 2 middle numbers:    
``` 1, 2, 3, 4, (5, 6), 7, 8, 9, 10 ```
- Get the average (5 + 6) / 2 = ``` 5.5 ```.
- As you can see, the median can be the same as the mean, but it's not always true.

#### Pseudo code for getting the median
```
sort(array)
median
if array is odd:
  median = array[array.length / 2]
if array is even:
  median = (array[array.length / 2 - 1] + array[array.length / 2]) / 2
```

### Mode
- It's the most common number:    
``` 1 1 1 2 2 2 2 3 3 8 ```   
- The most common number is 2, so the mode is 2. Note that there could be multiple modes.
#### Pseudo code
```
freq = []
for element in array:
  freq of element + 1
mode = element of maximum occurence in freq
```

### Math Fomulas
#### Regular Shapes
|Shape    | Formula For Area| Formula For Volume| Formula For Perimeter|
|---------|:---------------:|:-----------------:|:--------------------:|
|Square| length * width or length^2| N/A| 4 * length|
|Rectangle| length * width| N/A| 2 * (length + width)|
|Trapezoid| 1/2 * (bottom + top) * height| N/A| bottom + top + 2 * sides|
|Circle| r^2 * π| N/A| 2πr or πD| 
|Triangle| base * height / 2| N/A| side1 + side2 + side3|
|Hexagon| 6 * (side^2√3)/4| N/A| 6 * side|
|Any Prism|Add up the areas of its faces|baseArea * height| N/A|
|Any Pyramid| Add up the area of its base and sides| 1/3 * baseArea * height| N/A|
|Cone| πr(r+√(h^2+r^2))| 1/3 * baseArea * height| N/A|
|Sphere|4 * πr^2|4/3 * πr^3| N/A|

### Special Formulas
#### Equilateral triangle
- Let s be one of its sides:    
Area = ```(s^2√3)/4```   

#### Pythogorean
- Let a and b represent the opposite and adjacent, c be the hypotenuese:    
```a^2 + b^2 = c^2```

#### Arithmetic
- Let A1 the first term, d be the difference between each term, An be the last term, and n be the number of terms, and Sa be the sum of this sequence:    
```An = A1 + (n - 1) * d ```   
``` Sa = (A1 + An) * n / 2```

### Degrees
#### Sum of interior angle theorem
- Let n be the number of sides, the interior angles sum is:    
```(n - 2) * 180```
#### Triangle Angle Sum
- A triangle interior angles must all add up to **180 degress**.

### Coordinates / Points
- A point is defined by points (x, y) where x is the x-axis, on the bottom and y is the y-axis, the vertical one.
#### Slope
- A slope is equal to ```rise over run```, or ``` delta y / delta x ```.
#### Distance Formula
- Let x1, y1 be a point and x2, y2 be another point:    
```Distance = √((y2 - y1)^2 + (x2 - x1)^2)```


### Absolute Value
- Gives the full value of an value, so negatives turn positive and positive stays positive   
- Example ```-3``` becomes ```3``` and ```4``` becomes ```4```, absolute value is represented using ```|x|```, where x is an number.

## Using math related stuff in programming languages
### Python
- Import the math directory for high / advanced math methods / functions
### Java
``` java 
import java.util.*
``` 
- ...is all you need, the java math import:
``` java
import java.math.*
``` 
- basically just imports the ```BigInteger``` class.
### C++
- Import either the 
``` cpp 
#include<math> 
```
or
``` cpp
#include<bits/stdc++.h>
```
- directories and you should be good to go.
#### Please read up on documentations of each function / method if you are not sure on how they do things
