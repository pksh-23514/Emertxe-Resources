#!/bin/bash

read -p "Enter the Base, Perpendicular and Hypotenuse of the Right angle Triangle: " b p h

area=`echo "${b}*${p}/2" | bc`
perimeter=`echo "${b}+${p}+${h}" | bc`

if [ ${area} -eq ${perimeter} ]
then
    echo "The Triangle is Perfect Right Triangle"
else
    echo "Thr Triangle is not a Perfect Right Triangle"
fi
