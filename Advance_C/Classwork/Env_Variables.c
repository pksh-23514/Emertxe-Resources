#include <stdio.h>

int main (int argc, char* argv[], char* envp[])     //Although we are not using any arguments, we have to mention it in the main()'s definition. Otherwise, it causes Segmentation fault.
{
    int i = 0;
    while (envp [i] != NULL)
    {
        printf ("%s\n", envp [i]);  //This will print the entire list of Environment variables present in the '.bashrc' file. Can be cross-verified by using 'env' command in the prompt.
        i++;
    }
    return 0;
}
//int main (int argc, char* argv[]) - Valid definition.
//int main (char* envp[]) - //Invalid definition.
