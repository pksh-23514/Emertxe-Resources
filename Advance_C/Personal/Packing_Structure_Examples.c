#include <stdio.h>

#if 0
struct Student
{
    int id; char name[20]; char add[60];
}s1;
int main()
{
    s1.id = 23;
    s1.name[] = "PK";       //error: expected expression before ‘]’ token.
    s1.add[] = "Jsr";       //error: expected expression before ‘]’ token.
    printf ("%d\t%s\t%s\n", s1.id, s1.name, s1.add);
    return 0;
}
#endif

#if 0
struct Student
{
    int id; char name[20]; char add[60];
}s1;
int main()
{
    s1.id = 23;
    s1.name[] = {'P', 'K', '\0'};         //error: expected expression before ‘]’ token.
    s1.add[] = {'J', 's', 'r', '\0'};     //error: expected expression before ‘]’ token.
    printf ("%d\t%s\t%s\n", s1.id, s1.name, s1.add);
    return 0;
}
#endif

#if 0
struct Student
{
    int id; char name[20]; char add[60];
}s1;
int main()
{
    s1.id = 23;
    s1.name[20] = "PK";       //warning: assignment makes integer from pointer without a cast [-Wint-conversion].
    s1.add[60] = "Jsr";       //warning: assignment makes integer from pointer without a cast [-Wint-conversion].
    printf ("%d\t%s\t%s\n", s1.id, s1.name, s1.add);
    return 0;
//23		$
}
#endif

#if 0
struct Student
{
    int id; char name[20]; char add[60];
}s1;
int main()
{
    s1.id = 23;
    s1.name[20] = {'P', 'K', '\0'};         //error: expected expression before ‘{’ token.
    s1.add[60] = {'J', 's', 'r', '\0'};     //error: expected expression before ‘{’ token.
    printf ("%d\t%s\t%s\n", s1.id, s1.name, s1.add);
    return 0;
}
#endif

#if 0
#include <string.h>
struct Student
{
    int id; char name[20]; char add[60];
}s1;
int main()
{
    s1.id = 23;
    strncpy (s1.name, "PK", 20);        //Modifiable string.
    strncpy (s1.add, "Jsr", 60);        //Modifiable string.
    s1.add [1] = 'S', s1.add [2] = 'R';
    printf ("%d\t%s\t%s\n", s1.id, s1.name, s1.add);
    return 0;
//23	PK	JSR
}
#endif

#if 0
struct Student
{
    int id; char name[20]; char add[60];
}s1;
int main()
{
    s1 = {23, "PK", "Jsr"};         //error: expected expression before ‘{’ token.
    printf ("%d\t%s\t%s\n", s1.id, s1.name, s1.add);
    return 0;
}
#endif

#if 0
struct Student
{
    int id; char name[20]; char add[60];
};
int main()
{
    struct Student s1 = {23, "PK", "Jsr"};          //Initialisation at one go. Modifiable string.
    s1.add [1] = 'S', s1.add [2] = 'R';
    printf ("%d\t%s\t%s\n", s1.id, s1.name, s1.add);
    return 0;
//23    PK  JSR
}
#endif

#if 0
struct Student
{
    int id; char name[20]; char add[60];
}s1;
int main()
{
    s1.id = 23;
    s1.name [0] = 'P', s1.name [1] = 'K', s1.name [2] = '\0';                   //Modifiable string.
    s1.add [0] = 'J', s1.add [1] = 'S', s1.add [2] = 'R', s1.add [3] = '\0';    //Modifiable string.
    printf ("%d\t%s\t%s\n", s1.id, s1.name, s1.add);
    return 0;
//23    PK  JSR
}
#endif

#if 0
struct Student
{
    int id; char* name; char* add;
}s1;
int main()
{
    s1.id = 23;
    s1.name = "PK";       //Constant string.
    s1.add = "Jsr";       //Constant string.
    printf ("%d\t%s\t%s\n", s1.id, s1.name, s1.add);
    return 0;
}
#endif

#if 0
struct Student
{
    int id; char* name; char* add;
}s1;
int main()
{
    s1.id = 23;
    s1.name = "PK";       //Constant string.
    s1.add = "Jsr";       //Constant string.
    s1.add [1] = 'S', s1.add [2] = 'R';         //Cannot modify the constant string as it is placed in the Text Segment.
    printf ("%d\t%s\t%s\n", s1.id, s1.name, s1.add);
    return 0;
//Segmentation fault (core dumped)
}
#endif

#if 0
struct Student
{
    char c1, c2; int i;
}s;
int main()
{
    printf ("%lu\t%lu\t%lu\t%lu\n", sizeof (s), sizeof (s.c1), sizeof (s.c2), sizeof (s.i));
    printf ("%p\t%p\t%p\n", &s.c1, &s.c2, &s.i);
    return 0;
//8	1	1	4
//0x563d9b722018	0x563d9b722019	0x563d9b72201c
}
#endif

#if 0
struct Student
{
    char c1; int i; char c2;
}s;
int main()
{
    printf ("%lu\t%lu\t%lu\t%lu\n", sizeof (s), sizeof (s.c1), sizeof (s.i), sizeof (s.c2));
    printf ("%p\t%p\t%p\n", &s.c1, &s.i, &s.c2);
    return 0;
//12	1	4	1
//0x5654e814d018	0x5654e814d01c	0x5654e814d020
}
#endif

#if 0
struct Student
{
    int i; char c; short sh;
}s;
int main()
{
    printf ("%lu\t%lu\t%lu\t%lu\n", sizeof (s), sizeof (s.i), sizeof (s.c), sizeof (s.sh));
    printf ("%p\t%p\t%p\n", &s.i, &s.c, &s.sh);
    return 0;
//8	4	1	2
//0x5644cfb5a018	0x5644cfb5a01c	0x5644cfb5a01e
}
#endif

#if 0
struct Student
{
    char c; int i; short sh; double d;
}s;
int main()
{
    printf ("%lu\t%lu\t%lu\t%lu\t%lu\n", sizeof (s), sizeof (s.c), sizeof (s.i), sizeof (s.sh), sizeof (s.d));
    printf ("%p\t%p\t%p\t%p\n", &s.c, &s.i, &s.sh, &s.d);
    return 0;
//24	1	4	2	8
//0x564553638020	0x564553638024	0x564553638028	0x564553638030
}
#endif

#if 0
struct Student
{
    char c; double d; int i; short sh;
}s;
int main()
{
    printf ("%lu\t%lu\t%lu\t%lu\t%lu\n", sizeof (s), sizeof (s.c), sizeof (s.d), sizeof (s.i), sizeof (s.sh));
    printf ("%p\t%p\t%p\t%p\n", &s.c, &s.d, &s.i, &s.sh);
    return 0;
//24	1	8	4	2
//0x55d11cd14020	0x55d11cd14028	0x55d11cd14030	0x55d11cd14034
}
#endif

#if 0
struct Student
{
    char c; int i; double d; short sh;
}s;
int main()
{
    printf ("%lu\t%lu\t%lu\t%lu\t%lu\n", sizeof (s), sizeof (s.c), sizeof (s.i), sizeof (s.d), sizeof (s.sh));
    printf ("%p\t%p\t%p\t%p\n", &s.c, &s.i, &s.d, &s.sh);
    return 0;
//24	1	4	8	2
//0x55922d8d0020	0x55922d8d0024	0x55922d8d0028	0x55922d8d0030
}
#endif

#if 0
struct Student
{
    int i; char c; double d; short sh;
}s;
int main()
{
    printf ("%lu\t%lu\t%lu\t%lu\t%lu\n", sizeof (s), sizeof (s.i), sizeof (s.c), sizeof (s.d), sizeof (s.sh));
    printf ("%p\t%p\t%p\t%p\n", &s.i, &s.c, &s.d, &s.sh);
    return 0;
//24	4	1	8	2
//0x55678f12e020	0x55678f12e024	0x55678f12e028	0x55678f12e030
}
#endif

#if 0
struct Student
{
    int i; double d; char c; short sh;
}s;
int main()
{
    printf ("%lu\t%lu\t%lu\t%lu\t%lu\n", sizeof (s), sizeof (s.i), sizeof (s.d), sizeof (s.c), sizeof (s.sh));
    printf ("%p\t%p\t%p\t%p\n", &s.i, &s.d, &s.c, &s.sh);
    return 0;
//24	4	8	1	2
//0x5595a2332020	0x5595a2332028	0x5595a2332030	0x5595a2332032
}
#endif

#if 0
struct Student
{
    char c; int i; short sh; float f;
}s;
int main()
{
    printf ("%lu\t%lu\t%lu\t%lu\t%lu\n", sizeof (s), sizeof (s.c), sizeof (s.i), sizeof (s.sh), sizeof (s.f));
    printf ("%p\t%p\t%p\t%p\n", &s.c, &s.i, &s.sh, &s.f);
    return 0;
//16	1	4	2	4
//0x558e79644020	0x558e79644024	0x558e79644028	0x558e7964402c
}
#endif

#if 0
struct Student
{
    int i; short sh; char c; float f;
}s;
int main()
{
    printf ("%lu\t%lu\t%lu\t%lu\t%lu\n", sizeof (s), sizeof (s.i), sizeof (s.sh), sizeof (s.c), sizeof (s.f));
    printf ("%p\t%p\t%p\t%p\n", &s.i, &s.sh, &s.c, &s.f);
    return 0;
//12	4	2	1	4
//0x55c3910b5018	0x55c3910b501c	0x55c3910b501e	0x55c3910b5020
}
#endif

#if 0
struct Student
{
    char c; int i; short sh; float f; double d;
}s;
int main()
{
    printf ("%lu\t%lu\t%lu\t%lu\t%lu\t%lu\n", sizeof (s), sizeof (s.c), sizeof (s.i), sizeof (s.sh), sizeof (s.f), sizeof (s.d));
    printf ("%p\t%p\t%p\t%p\t%p\n", &s.c, &s.i, &s.sh, &s.f, &s.d);
    return 0;
//24	1	4	2	4	8
//0x557b1aa9a020	0x557b1aa9a024	0x557b1aa9a028	0x557b1aa9a02c	0x557b1aa9a030
}
#endif

#if 0
struct Student
{
    int i; char c; short sh; float f; double d;
}s;
int main()
{
    printf ("%lu\t%lu\t%lu\t%lu\t%lu\t%lu\n", sizeof (s), sizeof (s.i), sizeof (s.c), sizeof (s.sh), sizeof (s.f), sizeof (s.d));
    printf ("%p\t%p\t%p\t%p\t%p\n", &s.i, &s.c, &s.sh, &s.f, &s.d);
    return 0;
//24	4	1	2	4	8
//0x556678e92020	0x556678e92024	0x556678e92026	0x556678e92028	0x556678e92030
}
#endif

#if 0
struct Student
{
    int i; float f; short sh; char c; double d;
}s;
int main()
{
    printf ("%lu\t%lu\t%lu\t%lu\t%lu\t%lu\n", sizeof (s), sizeof (s.i), sizeof (s.f), sizeof (s.sh), sizeof (s.c), sizeof (s.d));
    printf ("%p\t%p\t%p\t%p\t%p\n", &s.i, &s.f, &s.sh, &s.c, &s.d);
    return 0;
//24	4	4	2	1	8
//0x5637adb2c020	0x5637adb2c024	0x5637adb2c028	0x5637adb2c02a	0x5637adb2c030
}
#endif

#if 0
struct Student
{
    int i; float f; char c; short sh; double d;
}s;
int main()
{
    printf ("%lu\t%lu\t%lu\t%lu\t%lu\t%lu\n", sizeof (s), sizeof (s.i), sizeof (s.f), sizeof (s.c), sizeof (s.sh), sizeof (s.d));
    printf ("%p\t%p\t%p\t%p\t%p\n", &s.i, &s.f, &s.c, &s.sh, &s.d);
    return 0;
//24	4	4	1	2	8
//0x55dd03240020	0x55dd03240024	0x55dd03240028	0x55dd0324002a	0x55dd03240030
}
#endif

#if 0
struct Student
{
    char c; int i; short sh; long l;
}s;
int main()
{
    printf ("%lu\t%lu\t%lu\t%lu\t%lu\n", sizeof (s), sizeof (s.c), sizeof (s.i), sizeof (s.sh), sizeof (s.l));
    printf ("%p\t%p\t%p\t%p\n", &s.c, &s.i, &s.sh, &s.l);
    return 0;
//24	1	4	2	8
//0x55d8a4eb2020	0x55d8a4eb2024	0x55d8a4eb2028	0x55d8a4eb2030
}
#endif

#if 0
struct Student
{
    char c; short sh; int i; long l;
}s;
int main()
{
    printf ("%lu\t%lu\t%lu\t%lu\t%lu\n", sizeof (s), sizeof (s.c), sizeof (s.sh), sizeof (s.i), sizeof (s.l));
    printf ("%p\t%p\t%p\t%p\n", &s.c, &s.sh, &s.i, &s.l);
    return 0;
//16	1	2	4	8
//0x55a6371ae020	0x55a6371ae022	0x55a6371ae024	0x55a6371ae028
}
#endif

#if 0
struct Student
{
    char c; short sh; int i; long l;
}s;
int main()
{
    printf ("%lu\t%lu\t%lu\t%lu\t%lu\n", sizeof (s), sizeof (s.c), sizeof (s.sh), sizeof (s.i), sizeof (s.l));
    printf ("%p\t%p\t%p\t%p\n", &s.c, &s.sh, &s.i, &s.l);
    return 0;
//16	1	2	4	8
//0x55a6371ae020	0x55a6371ae022	0x55a6371ae024	0x55a6371ae028
}
#endif

#if 0
struct Student
{
    short sh; int i; char c; long l;
}s;
int main()
{
    printf ("%lu\t%lu\t%lu\t%lu\t%lu\n", sizeof (s), sizeof (s.sh), sizeof (s.i), sizeof (s.c), sizeof (s.l));
    printf ("%p\t%p\t%p\t%p\n", &s.sh, &s.i, &s.c, &s.l);
    return 0;
//24	2	4	1	8
//0x55a203ded020	0x55a203ded024	0x55a203ded028	0x55a203ded030
}
#endif

#if 0
struct Student
{
    short sh; int i; long l; char c;
}s;
int main()
{
    printf ("%lu\t%lu\t%lu\t%lu\t%lu\n", sizeof (s), sizeof (s.sh), sizeof (s.i), sizeof (s.l), sizeof (s.c));
    printf ("%p\t%p\t%p\t%p\n", &s.sh, &s.i, &s.l, &s.c);
    return 0;
//24	2	4	8	1
//0x55c16e463020	0x55c16e463024	0x55c16e463028	0x55c16e463030
}
#endif

#if 0
struct Student
{
    char c; short sh; int i; long l; double d;
}s;
int main()
{
    printf ("%lu\t%lu\t%lu\t%lu\t%lu\t%lu\n", sizeof (s), sizeof (s.c), sizeof (s.sh), sizeof (s.i), sizeof (s.l), sizeof (s.d));
    printf ("%p\t%p\t%p\t%p\t%p\n", &s.c, &s.sh, &s.i, &s.l, &s.d);
    return 0;
//24	1	2	4	8	8
//0x560664d36020	0x560664d36022	0x560664d36024	0x560664d36028	0x560664d36030
}
#endif

#if 0
struct Student
{
    short sh; char c; double d; int i; long l;
}s;
int main()
{
    printf ("%lu\t%lu\t%lu\t%lu\t%lu\t%lu\n", sizeof (s), sizeof (s.sh), sizeof (s.c), sizeof (s.d), sizeof (s.i), sizeof (s.l));
    printf ("%p\t%p\t%p\t%p\t%p\n", &s.sh, &s.c, &s.d, &s.i, &s.l);
    return 0;
//32	2	1	8	4	8
//0x559b610de040	0x559b610de042	0x559b610de048	0x559b610de050	0x559b610de058
}
#endif

#if 0
struct Student
{
    char c; short sh; float f; int i; long l; double d;
}s;
int main()
{
    printf ("%lu\t%lu\t%lu\t%lu\t%lu\t%lu\t%lu\n", sizeof (s), sizeof (s.c), sizeof (s.sh), sizeof (s.f), sizeof (s.i), sizeof (s.l), sizeof (s.d));
    printf ("%p\t%p\t%p\t%p\t%p\t%p\n", &s.c, &s.sh, &s.f, &s.i, &s.l, &s.d);
    return 0;
//32	1	2	4	4	8	8
//0x55a9468e6040	0x55a9468e6042	0x55a9468e6044	0x55a9468e6048	0x55a9468e6050	0x55a9468e6058
}
#endif

#if 1
struct Student
{
	int id; char name[18]; char add[55];
}s1;
int main()
{
	printf ("%lu\t%lu\t%lu\t%lu\n", sizeof (s1), sizeof (s1.id), sizeof (s1.name), sizeof (s1.add));
	printf ("%p\t%p\t%p\n", &s1.id, &s1.name, &s1.add);
	printf ("%p\n", &s1 + 1);
	return 0;
//80	4	18	55
//0x55590538f040	0x55590538f044	0x55590538f056
//0x55590538f090
//The Last 3 bytes after 0x55590538f08C are padded to align the Structure properly making the Total size as 80 Bytes.
}
#endif
