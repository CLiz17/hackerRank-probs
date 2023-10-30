# HackerRank Problem and Solutions

> The repository contains the solutions to various HackerRank problems solved using C++ programmming language. Each solution includes a reference to the problem statement and is well-documented to explain the logic and approach. Below you can find the documentation of 10 different problems.

## 1. camelCase

- [View Problem Statement](https://www.hackerrank.com/challenges/3d-surface-area/problem](https://www.hackerrank.com/challenges/camelcase/problem?isFullScreen=true))
- [View Solution](./camelCase.cpp) 

#### Problem Explanation:
The problem is to calculate the number of words in a string s which is a combination of n number of words.

#### Solution Approach:
> - Here, we are considering a string as a combination of words.
> - In a camel case format, the first word starts with a small letter and other words start with a capital letter.
> - In this problem, we have to count the number of capital letters in the string as each words start with a capital letter that corresponds to the number of words.
> - Initilise count = 1 as each string has atleast one word.
> - Create a loop to traverse through the string to calculate the number of capital letters that corresponds to the number of words.
> - Return the count 

#### Sample Input to the function
```
camelCase
```

#### Sample Output to the function
```
2
```
