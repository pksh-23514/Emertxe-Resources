#!/bin/bash

for i in `seq 0 1 4`
do
    for j in `seq $((4-${i}))`
    do
        echo -n "  "
    done
    for k in `seq $((${i}+1))`
    do
        echo -n "$((${k}%2)) "
    done
    echo
done
