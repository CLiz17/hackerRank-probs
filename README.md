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
## 2. Pangram

- [View Problem Statement](https://www.hackerrank.com/challenges/pangrams/problem?isFullScreen=true)
- [View Solution](./pangrams.cpp) 

#### Problem Explanation:
The problem is to check if the given string contains all the letters of the alphabet.

#### Solution Approach:
**A string is called pangram if it contains all the letters of the alphabet**
> - Define a boolean array of size 26 and set all the values to false as default.
> - To get the letter number of each character from the string
>   - Convert each characters to lower case
>   - Store it to an integer number after subtracting the currrent value from alphabet 'a'
> - Traverse through the entire string and change the positions were the character exist to "true"
> - Finally, check through the boolean array if any position is false. If so, it is not pangram. If all the values are true, it is a pangram

#### Sample Input to the function
```
We promptly judged antique ivory buckles for the next prize
```

#### Sample Output to the function
```
pangram
```
