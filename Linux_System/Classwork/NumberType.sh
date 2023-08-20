#!/bin/bash

read -p "Enter the 2 numbers n1 and n2: " n1 n2

prod=`echo "${n1}*${n2}" | bc`
rem=`echo "${prod}%2" | bc`

if [ ${rem} -eq 0 ]
then
    echo "Product of ${n1} and ${n2} is even"
else
    echo "Product of ${n1} and ${n2} is odd"
fi
