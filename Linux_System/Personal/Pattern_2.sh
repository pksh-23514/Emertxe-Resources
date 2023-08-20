#!/bin/bash

read -p "Enter the number of lines the Pattern needs to be printed: " n

for i in `seq ${n}`
do
    for j in `seq $((${n}-${i}))`
    do
        echo -n " "
    done
    for k in `seq $((2*${i}-1))`
    do
        echo -n "*"
    done
    echo
done
for i in `seq $((${n}-1)) -1 1`
do
    for j in `seq $((${n}-${i}))`
    do
        echo -n " "
    done
    for k in `seq $((2*${i}-1))`
    do
        echo -n "*"
    done
    echo
done
