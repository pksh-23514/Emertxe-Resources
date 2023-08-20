#!/bin/bash

for i in `seq 100`
do
    if [ `echo "${i}%2" | bc` -eq 0 ]
    then
        echo -n "${i} "
    fi
done
echo
