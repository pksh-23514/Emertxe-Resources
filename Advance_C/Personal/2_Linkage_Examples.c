#if 0
#include <stdio.h>

int x;          //This is just a declaration. So, compiler finds the previous definition for 'x' in the linker stage.
//Since, 'x' is already defined in 1_Linkage_Examples; this declaration is linked to that definition of 'x'.
int foo ()
{
    printf ("x in foo: %d\n", x);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int x;          //Since both the 'x' are declarations, in the linker stage one of them is allotted memory with a default value of 0.
int foo ()
{
    printf ("x in foo: %d\n", x);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int x = 10;     //Throws error as: multiple definition for 'x'. It happens in the linker stage as 'x' is also defined in 1_Linkage_Examples.
int foo ()
{
    printf ("x in foo: %d\n", x);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int x;         //This is a declaration and compiler tries to find the previous definition for 'x' in the linker stage. However, 'x' in 1_Linkage_Examples is "static" and its scope is inside the file.
//So, that 'x' and this 'x' cannot be linked. So, compiler allots a separate memory location for this 'x' with a default value of 0.
int foo ()
{
    printf ("x in foo: %d\n", x);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int x = 20;         //This is a definition. Since, 'x' in 1_Linkage_Examples is "static" and its scope is inside the file and cannot be linked to this 'x' in the linker stage and are kept separate.
int foo ()
{
    printf ("x in foo: %d\n", x);
    return 0;
}
#endif

#if 0
#include <stdio.h>

static int x = 20;      //'x' is a static variable and it is limited to 2_Linkage_Examples. So, in the linker stage; compiler finds 2 static variables and won't link them.
//They have separate memory addresses in the data segment. And will not throw any error even though they are of same name.
int foo ()
{
    printf ("x in foo: %d\n", x);
    return 0;
}
#endif

#if 1
#include <stdio.h>

int x;          //This is a declaration and compiler tries to find the previous definition for 'x' in the linker stage. However, 'x' in 1_Linkage_Examples is "static" and its scope is inside the file.
//So, that 'x' and this 'x' cannot be linked. So, compiler allots a separate memory location for this 'x' with a default value of 0.
int foo (int x) //This 'x' passed as arguments from 1_Linkage_Examples takes precedenc over the 'x' declaration done above as it is on the Stack frame of the function.
{
    printf ("x in foo: %d\n", x);
    return 0;
}
#endif
