#!/bin/bash

<<Documentation
Name         : Prabhat Kiran
Date         : 24th June 2022
Description  : Write a script named optcalc.sh. Your script will implement a simple calculator using command line options. The script will take three command-line parameters: x (a number), y (another number), and o, an operation which is one of add, sub, mul, or div. It will then add, subtract, multiply, or divide x and y, depending on which operator was chosen, and display the result.
Sample Input : 1) ./optcalc.sh -x 3 -o add -y 5
               2) ./optcalc.sh -y 2 -x 15 -o sub
               3) ./optcalc.sh -o mul -x 12 -y 144
               4) ./optcalc.sh -o div -y 4 -x 1892
               5) ./optcalc.sh -x 3
               6) ./optcalc.sh -x 3 -c bad -c is an invalid option.
Sample Output: Here is sample output from several runs of the program. Your program does not have to give exactly these prompts and error messages, but it must exhibit similar behavior:
               1) ./optcalc.sh -x 3 -o add -y 5 8
               2) ./optcalc.sh -y 2 -x 15 -o sub 13
               3) ./optcalc.sh -o mul -x 12 -y 144 1728
               4) ./optcalc.sh -o div -y 4 -x 1892 473
               5) Usage: ./optcalc.sh -x number -y number -o add|sub|mul|div
               6) ./optcalc.sh -x 3 -c bad -c is an invalid option.
Documentation

flag=1
if [ $# -eq 6 ]
then
    arr=($@)
    len=$(($#-1))
    for i in `seq 0 2 ${len}`
    do
        case ${arr[i]} in
            -x) x=${arr[i+1]}
                ;;
            -y) y=${arr[i+1]}
                ;;
            -o) opt=${arr[i+1]}
                ;;
        esac
    done
    case ${opt} in
        add) ans=$((${x}+${y}))
            ;;
        sub) ans=$((${x}-${y}))
            ;;
        mul) ans=$((${x}*${y}))
            ;;
        div) ans=$((${x}/${y}))
            ;;
        *) echo "The operator ${opt} is invalid."
            flag=0
            ;;
    esac
    if [ ${flag} -eq 1 ]
    then
        echo "${arr[@]} ${ans}"
    fi
else
    echo "Usage: -x 3 -y 4 -opt add/sub/mul/div"
fi
