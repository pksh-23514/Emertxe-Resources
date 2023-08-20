#!/bin/bash

read -p "Enter the number: " num

if [ `echo "${num}%5" | bc` -eq 0 ]
then
    echo "Number ${num} is a multiple of 5"
else
    echo "Number ${num} is not a multiple of 5"
fi
