#!/bin/bash

read -p "Enter the number of terms to be printed in the Fibonacci series: " n
first=0
second=1
third=0

for i in `seq ${n}`
do
    if [ ${i} -lt ${n} ]
    then
         echo -n "${third}, "
         first=${second}
         second=${third}
         third=$((${first} + ${second}))
     else
         echo -n "${third}."
     fi
done
echo
