#!/bin/bash

for i in `seq 0 1 4`
do
    for j in `seq ${i}`
    do
        echo -n "  "
    done
    for k in `seq $((5-${i}))`
    do
        echo -n "* "
    done
    echo
done
