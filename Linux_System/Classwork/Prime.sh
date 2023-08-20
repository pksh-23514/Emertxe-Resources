#!/bin/bash

read -p "Enter the number that needs to be checked: " num

count=0
for i in `seq ${num}`
do
    if [ `echo "${num}%${i}" | bc` -eq 0 ]
    then
        count=$((${count}+1))
    fi
done
if [ ${count} -eq 2 ]
then
    echo "The number ${num} is a Prime Number"
else
    echo "The number ${num} is not a Prime Number"
fi
