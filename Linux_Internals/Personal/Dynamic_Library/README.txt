Dynamic Library Creation:

1. Create a C file that contains functions in your library.
2. Create a header file for the library.
3. Compile library files: gcc -fPIC -shared lib_mylib.c -o lib_mylib.so
{The flag-shared instructs the compiler that we are building a shared library. The flag -fPIC is to generate position-independent code.}
4. We have to add our current directory to the LD_LIBRARY_PATH environment variable: export LD_LIBRARY_PATH=.
5. Create a C file with main function.
6. Compile the driver program: gcc driver.c -l_mylib -L. -o driver
7. Run the driver program executable.
