#include <stdio.h>

#if 0
typedef unsigned int uint;
int main()
{
    int p1, p2;
    uint n;
    printf ("Enter the number in Hex for which the swapping of Bits needs to be done: ");
    scanf ("%x", &n);
    printf ("Enter the First Position from where the Bit needs to be swapped: ");
    scanf ("%d", &p1);
    printf ("Enter the Second Position from where the Bit needs to be swapped: ");
    scanf ("%d", &p2);

    if ((p1 < 32) && (p2 < 32))
    {
        uint t1, t2, t3;
        t1 = (n & (1 << p1)) >> p1;     //Get the Bit at 'p1' position to '0th' position.
        t2 = (n & (1 << p2)) >> p2;     //Get the Bit at 'p1' position to '0th' position.
        t3 = t1 ^ t2;
        n = n ^ (t3 << p1 | t3 << p2);  //Shift 't3' to positions 'p1' and 'p2' and then XOR with 'n' to reverse the bits at position 'p1' and 'p2' (Reversing using XOR-logic applied).
        printf ("Updated number after Swapping bits: %X\n", n);
    }
    else
    {
        printf ("The Position values shall be within the range of 0 to 31.\n");
    }

    return 0;
}
#endif

#if 1
typedef unsigned int uint;
int main()
{
    int p1, p2;
    uint n;
    printf ("Enter the number in Hex for which the swapping of Bits needs to be done: ");
    scanf ("%x", &n);
    printf ("Enter the First Position from where the Bit needs to be swapped: ");
    scanf ("%d", &p1);
    printf ("Enter the Second Position from where the Bit needs to be swapped: ");
    scanf ("%d", &p2);

    if ((p1 < 32) && (p2 < 32))
    {
        uint t1, t2, t3;
        t1 = ((n & (1 << p1)) >> p1) << p2;     //Get the Bit at 'p1' position to 'p2' position.
        t2 = ((n & (1 << p2)) >> p2) << p1;     //Get the Bit at 'p1' position to 'p2' position.
        n = (n & (~(1 << p1)));                 //Clear the Bit at 'p1' position.
        n = (n & (~(1 << p2)));                 //Clear the Bit at 'p2' position.
        n = n | t1 | t2;                        //Using OR operation, we can set the Bits at the reverse positions in the number.
        printf ("Updated number after Swapping bits: %X\n", n);
    }
    else
    {
        printf ("The Position values shall be within the range of 0 to 31.\n");
    }

    return 0;
}
#endif
