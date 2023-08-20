#!/bin/bash

read -p "Enter the number that needs to be checked: " num
rev=0
rem=0
orig=${num}
while [ ${num} -gt 0 ]
do
    rem=`echo "${num}%10" | bc`
    rev=`echo "${rev}*10+${rem}" | bc`
    num=`echo "${num}/10" | bc`
done

if [ ${orig} -eq ${rev} ]
then
    echo "The number ${orig} is Palindrome"
else
    echo "The number ${orig} is not Palindrome"
fi
