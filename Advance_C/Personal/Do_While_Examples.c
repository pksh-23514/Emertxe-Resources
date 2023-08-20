#if 0
#include <stdio.h>

int main()
{
    int iter = 0;
    do
    {
        printf ("iter: %d\n", iter);
    } while (iter++ < 10);
    printf ("iter = %d\n", iter);
    return 0;
}
#endif

#if 1
#include <stdio.h>

int main()
{
    int iter = 0;
    do
    {
        printf ("iter: %d\n", iter);
    } while (++iter < 10);
    printf ("iter = %d\n", iter);
    return 0;
}
#endif
