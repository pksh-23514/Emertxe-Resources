//Undefined reference to 'pow' in the main is a Linker error. You are not linking in the math library, even if you introduce the function pow by including <math.h>.
//When a function works, it is because the calculation was done by the compiler itself (and included in the binary as if you wrote it out).
//Here, the <math.h> library isn't linked with your binary by default. The library <math.h> included in the code is not enough to execute the code successfully. The library should be linked.

//Most libraries are in /usr/lib/. If not, you may need to include the -L option to gcc to tell it where to find your library.
//If you list files in /usr/lib/, you will see that they have names like 'libname.so' or 'libname.a'. To link in these libraries, use "-l<name of the library>" command.
//For example, the math library is in the file /usr/lib/libm.so (and the static version of the library is in /usr/lib/libm.a).

//So, to link the math library into your program; use the following command: gcc Count_Set_Bits.c -lm.

#include <math.h>
#include <stdio.h>

int main() 
{
    int num;
    printf ("Enter the number: ");
    scanf("%d", &num);

    int count = 0, c = 0;
    unsigned int p;
    for (int i = 0; i < 32; i++)
    {
        p = (int) pow(2, i);     //To generate the power of (2^i). We can also use (1 << i) to generate the power of 2.
        //Eg.- Let's say num=9: (in binary: num=0000 0000 0000 0000 0000 0000 0000 1001). So, after 4th bit, there is no need to check for set bits as all are 0's. The loop runs 4 times only.
        if (p <= num)            //If the value of 'num' in binary has all 0's after a certain position till MSB, it is waste to run the loop to check for set bits.
        {
            c = c + 1;
            if (num & (1 << i))
            {
                count = count + 1;
            }
        }
        else
        {
            break;
        }
    }
    printf ("The number is = 0X%X\n", num);
    printf ("Count of Set-bits = %d\n", count);
    printf ("The number of times the loop runs = %d\n", c);
    return 0;
}
