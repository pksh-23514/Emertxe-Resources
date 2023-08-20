Static Library Creation:

1. Create a C file that contains functions in your library.
2. Create a header file for the library.
3. Compile library files: gcc -c lib_mylib.c -o lib_mylib.o
4. Create static library. This step is to bundle multiple object files in one static library: ar rcs lib_mylib.a lib_mylib.o
5. Now our static library is ready to use. At this point we could just copy lib_mylib.a somewhere else to use it. For demo purposes, let us keep the library in the current directory.
6. Create a C file with main function.
7. Compile the driver program: gcc -c driver.c -o driver.o (OR) gcc driver.c lib_mylib.a {If the archive is in the same directory}
8. Link the compiled driver program to the static library. Note that "-L." is used to tell that the static library is in current folder: gcc -o driver driver.o -L. -l_mylib
9. Run the driver program executable.
