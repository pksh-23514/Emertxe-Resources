#!/bin/bash

read -p "Enter the 2 numbers n1 and n2: " n1 n2

if [ ${n1} -ge ${n2} ]
then
    if [ `echo "${n1}%${n2}" | bc` -eq 0 ]
    then
        echo "${n1} is a multiple of ${n2}"
    else
        echo "${n1} is not a multiple of ${n2}"
    fi
else
    echo "Invalid Inputs"
fi
