#!/bin/bash

arr=(zero one two three four five)
echo ${arr[0]}
echo ${arr:0}
echo ${arr:1}
echo ${arr[@]:1}
echo ${#arr[0]}
echo ${#arr}
echo ${#arr[1]}
echo ${#arr[*]}
