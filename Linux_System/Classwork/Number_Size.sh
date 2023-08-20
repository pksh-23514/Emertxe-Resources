#!/bin/bash

read -p "Enter all the Numbers in the array: " -a arr

min=${arr[0]}
max=${arr[0]}

for i in `seq $((${#arr[@]}-1))`
do
    if [ ${arr[i]} -lt ${min} ]
    then
        min=${arr[i]}
    fi
    if [ ${arr[i]} -gt ${max} ]
    then
        max=${arr[i]}
    fi
done
echo "The minimun number in the Input series of Numbers is: ${min}"
echo "The maximum number in the Input series of Numbers is: ${max}"
