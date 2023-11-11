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
****
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
****
## 3. Max Min

- [View Problem Statement](https://www.hackerrank.com/challenges/angry-children/problem?isFullScreen=true)
- [View Solution](./maxMin.cpp) 

#### Problem Explanation:
The problem is to calculate the least difference between the maximum value and the minimum value of a subarray of size k from an array arr

#### Solution Approach:
> - First, we sort the array.
> - Then store the minimum and the maximum value from the sorted array
>   - Minimum value will be the first term
>   - Maximum value will be the k-1 th term
> - Now their difference should be minimum from the other subarrays.
> - So as they are sorted, the min and max value are traversed till the max value reaches the end of the array.
> - And each time they check if thier difference is the minimum. An return the most min value.

#### Sample Input to the function
```
4   //n=4
2   //k=2
1
4
7
2
```

#### Sample Output to the function
```
1
```
****
## 4. Sherloack and Array

- [View Problem Statement](https://www.hackerrank.com/challenges/sherlock-and-array/problem?isFullScreen=true)
- [View Solution](./sherlock-and-array.cpp) 

#### Problem Explanation:
The problem is to find an element in an array such that the sum of all elements to the left is equal to the sum of all elements to the right of that element. If such an element exist print "YES" else "NO"

#### Solution Approach:
> - Initialise left and right variable to zero and find the sum of all the elements of the array
> - Now traverse throught the array. For the first element,
>   - left = 0
>   - right = sum - 1st element
> - Now check if left and right is equal. If not traverse to the next element.
> - As we move through the array, each term keeps decreasing in the right and the previous elements is added to the left.

#### Sample Input to the function
```
1 2 3 3
```

#### Sample Output to the function
```
YES
```
****
## 5. Pairs

- [View Problem Statement](https://www.hackerrank.com/challenges/pairs/problem?isFullScreen=true)
- [View Solution](./pairs.cpp) 

#### Problem Explanation:
The problem is to find the number of pairs of array elements that have a difference equal to the k

#### Solution Approach:
> - 2 pointers are initialised
> - Initally i pointer is set to zero and the next pointer j traverses through the array from i+1
> - There is a counter that counter the number of pairs where the difference between the values fron the pointer i and j is the given value k
> - After j traverses the whole array, i moves to the next value and j starts again fro i+1

#### Sample Input to the function
```
5 2  // n=5, k=2       
1 5 3 4 2   
```

#### Sample Output to the function
```
3
```
****
## 5. Mars Exploration

- [View Problem Statement](https://www.hackerrank.com/challenges/mars-exploration/problem?isFullScreen=true)
- [View Solution](./mars-exploration.cpp) 

#### Problem Explanation:
A series of "SOS" messages are send. The problem is to find the number of changed letters in the SOS messages when received.

#### Solution Approach:
> - Here, SOS is of 3 letters. So after finding the lenght of the array, divide it by 3 to find the number of sets of "SOS" messages.
> - After which, traverse through each number of sets and in each set,
>   - Check if the letters in the 0 and 2 th positions are 'S' or not. If not increment the counter for the numbers of faults in the received message.
>   - And check if the letter in the 1st position is 'O' or not. If not increment the counter for the numbers of faults in the received message.
> - After traversing through the whole array, return the count.

#### Sample Input to the function
```
SOSSOTSOSSSS 
```

#### Sample Output to the function
```
2
```
