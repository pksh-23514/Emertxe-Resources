#!/bin/bash

<<Documentation
Name         : Prabhat Kiran
Date         : 20th June 2022
Description  :
Sample Input :
Sample Output:
Documentation

count ()
{
    id=(`cat /etc/passwd | cut -d ":" -f 3`)
    count=0
    for i in ${id[@]}
    do
        if [ $1 -le $i -a $i -le $2 ]
        then
            count=$((${count}+1))
        fi
    done
    echo "Total count of user ID between $1 to $2 is : ${count}"
}

if [ $# -eq 2 ]
then
    if [ $1 -lt $2 ]
    then
        count $1 $2
    else
        echo "Error : Invalid range. Please enter the valid range through CL."
    fi
elif [ $# -ne 2 -a $# -ne 0 ]
then
    echo -e "Error : Please pass 2 arguments through CL.\nUsage : ./user_ids.sh 100 200"
else
    count 500 10000
fi
