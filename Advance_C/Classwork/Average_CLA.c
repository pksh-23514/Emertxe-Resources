#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[])   //The argv is an array of Strings. So, we can use a double pointer as 'char** argv'.
{
    int sum = 0, i = 1;         //'argv[0]' is the executable program name (here "./a.out"). So, i = 1.
    while (argv [i] != NULL)
    {
        sum += (atoi (argv[i]));
        i++;
    }

    float avg = (float) sum / (float) (argc - 1);   //We have reduced 'argc' with 1 as the first argument is not considered while calculating the Sum.
    printf ("The average of the Command line arguments is : %f\n", avg);
    return 0;
}
