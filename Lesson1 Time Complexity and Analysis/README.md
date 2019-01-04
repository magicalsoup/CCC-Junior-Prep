# WELCOME To LESSON #1!
> Today we are going to talk about Time Complexity and Analysis

# Time Complexity
> ## What is Time Complexity?   
>> when using programming terms, its the time that your programs runs in, we will talk about the big 'O' notation later on
>> its useful when determing the right approach to a problem with a time limit, which basically all problems have

> # The big 'O' notation
>> ## What does it do?
>>> The O notation have parameters, or brackets (), inside those brackets, is a number, and that number is basically saying how many 
>>> operations your computer is doing in your program.
>>> ### Example  
>>>> **O(250)** --> means **250** operations   
>>>> **O(1000 000)** --> means **1 million** operations

>> ## How does it work?
>>> Computers nowadays have a computing speed of **1 billion** operations per **second**   
>>> that means if you have **O(1000 000 000)**, it will run in **one second**   
>>> Now be careful here, because when we programmers use this notation, we do a much broader overview of our program, so if you are just
>>> **adding** for **1 billion times**, it will run in one second as the operation of adding numbers runs in **O(1) time**, but usually we are doing 
>>> stuff with our variables, not just adding, so if we do the that **1 billion** times, its **not** going to run in **1 second**, 
>>> probably **2 - 3 seconds** even   
>>> This is a notation that I will use alot in my analysis   

>> ## How to calculate this?
>>> When we calculate for the O notation, we use logarithmic scale, or simply, we don't really care about linear changes
>>> ### Example
>>>> here **n** is a variable
>>>> **O(n + n)** becomes **O(n)**   
>>>> **O(10n)** becomes **O(n)**   
>>>> **O(n * n)** becomes **O(n ^ 2)**   

>> ## How do we determine the number inside O()?
>>> We use the variables that are stated in the problem to help us find the limit   
>>> This depends on different situations, but generally:   

>>> ### For Loops
>>>> Find out how many **nested** for loops you have, having n and m as a bound, if you have to for loops with limits of n and m   
>>>> you get **O(n * m)** time complexity   
>>>> when you have 3 nested for loops with n as a limit   
>>>> you get **O(n * n * n)**, or **O(n ^ 3)** complexity

>>> ### Sorting
>>>> **Bubble sort** has a complexity of n * n, as it has two nested for loops,   
>>>> you get **O(n * n)** or **O(n ^ 2)** time complexity   
>>>> **Merge sort** has a complexity of n * log(n),   
>>>> you get **O (n * log(n) )** or **O(n log(n))** time complexity    
>>>> If you have n * (1/2 + 1/3 + 1/4 ........ 1/n),    
>>>> you get **O (n * log(n))** or **O(n log(n))** time complexity

>>> ### Other Algorithms
>>>> algorithms have their own time complexity, a documentation or sources such as [Geeks For Geeks](https://www.geeksforgeeks.org/) 
>>>> will provide you with their time complexity

>> ## Worst vs Best time complexity
>>> Some alogrithms have a best and worst time complexity, which means they have a time complexity on the best case and worst
>>> case scenarios, but given the context of the CCC, its best to assume there will always be worst case scenarios and you should
>>> not trust on the algorithms best time complexity

# Analysis
> ## What is Analysis?
>> Analysis is just a basic study of the problem presented to you, time complexity is ties hand in hand in analysis, as you need it to
>> know what algorithm you should use  
>> I will explain analysis along the way for each problem, as there isn't a general rule or anything

> ## Memory Limit
>> Memory limit is not a huge thing in junior ccc, but I'll talk about it and there will be questions that you to analyze the memory   
>> allocation, generally, this comes in when you have a huge array or 2D array of numbers or other big data types

>> ## How is memory calculated?
>>> Its calculated by bytes, so an data type each of a set amount of memory, so for int, theres 4 bytes,    
>>> and the 'limits' you see on problems are in **M, or megabytes**, so a **million (1 000 000) bytes** is about **one megabyte**, 
>>> so if you have an array of lets say 
>>> 1 billion integers, the memory is **10 ^ 9 (1 billion) * 4 (each integer is 4 bytes)**, which is **4 billion**, and thats about
>>> **4000 Megabyte***   
>>> you basically count how much of the data type you are using, and their memory allocation in bytes are available online, which   
>>> you can search up and find out, I'll be talkng about memory limits along the way

> ## TIPS
>> Read the question **CAREFULLY**   
>> Make sure you don't miss any **important factors, constraints or properties**      
>> Look for **special properties** or anything that might help you   
>> Know the **limits of your programming language**, so **maxmium memory allocation**, **data types** bounds, **syntax**, etc
>> Ask for **Clarification** if needed

