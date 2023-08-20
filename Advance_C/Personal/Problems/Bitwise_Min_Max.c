/* Compute the minimum (min) or maximum (max) of two Integers without Branching (i.e. using If-Else or Ternary Operator).
   The solution is by Using Bitwise XOR.
 */

#include <stdio.h>

int main()
{
	int a,b;
	printf ("Enter the 2 Numbers to be checked:\n");
	scanf ("%d %d", &a, &b);

	int res;

	res = b ^ ((a ^ b) & (-(a < b)));
	printf ("The Minimum of the 2 Numbers is: %d\n", res);

	res = b ^ ((a ^ b) & (-(a > b)));
	printf ("The Maximum of the 2 Numbers is: %d\n", res);

	return 0;
}

/* In above expression,if the condition (a < b) is True; then -(a < b) become (-1), so it behaves like the below expression:
   result = b ^ ((a ^ b) & (-1));			//(-1) in Binary is 0xFFFFFFFF.
   result = b ^ ((a ^ b) & 0xFFFFFFFF);		//Bitwise AND with all 1's will give the same Expression.
   result = b ^ a ^ b; 						//(b ^ b) is 0.
   result = a ^ 0; 							//Bitwise XOR with 0 is that Expression.
   result = a; 								//Minimum Number.

   In above expression,if the condition (a < b) is False; then -(a < b) become (0), so it behaves like the below expression:
   result = b ^ ((a ^ b) & 0);				//Bitwise AND with 0 is '0'.
   result = b ^ 0							//Bitwise XOR with 0 is that Expression.
   result = b;								//Minimum Number.

   Similarly, by reversing the Condition to (a > b); the Maximum value of the 2 Numbers can be found.
 */
