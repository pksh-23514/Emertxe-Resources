#if 0
#include <stdio.h>

int foo (void);
int x = 10;
int main()
{
    foo();
    printf ("x in main: %d\n", x);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int foo (void);
int x;
int main()
{
    foo();
    printf ("x in main: %d\n", x);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int foo (void);
int x = 10;
int main()
{
    foo();
    printf ("x in main: %d\n", x);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int foo (void);
static int x = 10;          //This 'x' declared as static which restricts it's scope to 1_Linkage_Examples only.
int main()
{
    foo();
    printf ("x in main: %d\n", x);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int foo (void);
static int x = 10;          //This 'x' declared as static which restricts it's scope to 1_Linkage_Examples only.
int main()
{
    foo();
    printf ("x in main: %d\n", x);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int foo (void);
static int x = 10;          //This 'x' declared as static which restricts it's scope to 1_Linkage_Examples only.
int main()
{
    foo();
    printf ("x in main: %d\n", x);
    return 0;
}
#endif

#if 1
#include <stdio.h>

int foo (int);
static int x = 20;          //This 'x' declared as static which restricts it's scope to 1_Linkage_Examples only.
int main()
{
    foo (x);                //Although 'x' is static and its scope is limited to the file 1_Linkage_Examples, it's "value" can be passed as an argument to other functions in different file.
    printf ("x in main: %d\n", x);
    return 0;
}
#endif
