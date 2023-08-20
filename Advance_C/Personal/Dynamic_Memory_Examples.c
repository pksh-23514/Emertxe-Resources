#include <stdio.h>
#include <stdlib.h>

#if 0
int main()
{
    int* p = (int*) malloc (5);
    p[0] = 0x12345678;
    p[1] = 0x12345678;
    printf ("%#x\t%#x\n", p[0], p[1]);
    free (p);
    return 0;
//0x12345678	0x12345678
}
#endif

#if 0
int main()
{
    int* p = (int*) malloc (5 * sizeof (int));
    for (int i = 0; i < 5; i++)
    {
        p [i] = i + 1;
    }
    p = (int*) realloc (p, 3 * sizeof (int));
    for (int i = 0; i < 5; i++)
    {
        printf ("%d\t", p [i]);
    }
    printf ("\n");
    free (p);
    return 0;
//1 2   3	4	5	
}
#endif

#if 0
int main()
{
    void* p = malloc (5);
    printf ("%p\n", p);
    *(int*) (p + 5) = 0x12345678;
    printf ("%p\t%#x\n", (p + 5), *(int*) (p + 5));
    free (p);
    return 0;
/*0x564ba901f260
  0x564ba901f265	0x12345678*/
}
#endif

#if 0
int main()
{
    int* ptr = (int*) malloc (5 * sizeof (int));
    int* str = (int*) malloc (5 * sizeof (int));
    printf ("%p\t%p\n", ptr, str);
    ptr = (int*) realloc (ptr, 10 * sizeof (int));
    printf ("%p\n", ptr);
    free (ptr);
    free (str);
    return 0;
/*0x561fcb173260	0x561fcb173280
  0x561fcb1736b0*/
}
#endif

#if 1
int main()
{
    int* p = malloc (4*sizeof(int));
    for (int i = 0; i < 4; i++)
    {
        p[i] = i+1;
    }
    p = realloc (p, 10*sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf ("%d\t", p[i]);
    }
    printf ("\n");
    free (p);
    return 0;
//1	2	3	4	0	0	134545	0	0	0	
}
#endif
