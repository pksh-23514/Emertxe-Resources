#!/bin/bash

#Trying to print the file using it's absolute path from anywhere in the Directory structure.
#Used chmod +x to give execution permission for the file. Notice the color change in the file using 'ls' command.
echo "Hello World!"
echo "Trying to execute the file using absolute path."

echo
echo "Array with one index missing in between:"
ar=(1 2 3 6 "hello")    #The array with indices 0 to 4 are created.
ar[6]=8                 #Notice that the I have initialised the array index 6.
#The array element in the index 5 is missing. Check the output by printing all the elements of the array and length of the array.

echo "All the elements of the array: ${ar[@]}"
echo "Count of the number of elements in the array: ${#ar[@]}"

#The array size is 6 instead of 7 as the ar[5]=null and that is not counted in the array length calculation.
echo ${ar[5]}           #Nothing gets printed on the terminal screen if we print ar[5].
