/*
Name         : Prabhat Kiran
Date         : 28th December 2022
Description  : Cut the Sticks Problem
1. You are given a number of sticks of varying lengths. You will iteratively cut the sticks into smaller sticks, discarding the shortest pieces until there are none left.
2. At each iteration you will determine the length of the shortest stick remaining, cut that length from each of the longer sticks and then discard all the pieces of that shortest length.
3. When all the remaining sticks are the same length, they cannot be shortened so discard them.
4. Given the lengths of 'n' sticks, print the number of sticks that are left before each iteration until there are none left.
Sample Input : sticks [] = {1, 2, 3}
The shortest stick length is "1", so cut that length from the longer two and discard the pieces of length "1". Now the lengths are {1, 2}.
Again, the shortest stick is of length "1", so cut that amount from the longer stick and discard those pieces. There is only one stick left, {1}.
Now discard the left one stick.
Sample Output: left_sticks [] = {3, 2, 1}
*/

#include <stdio.h>

void sort (int a, int n)
