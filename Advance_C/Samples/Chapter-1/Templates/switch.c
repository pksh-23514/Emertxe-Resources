#if 0 
#include <stdio.h>

int main()
{
	int option;
	printf("Enter the value\n");
	scanf("%d", &option);

	switch (option)
	{
			case 10:
					printf("You entered 10\n");
					break;
			case 20:
					printf("You entered 20\n");
					break;
			default:
					printf("Try again\n");
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int option;
	printf("Enter the value\n");
	scanf("%d", &option);

	switch (option)
	{
			case 10:
					printf("You entered 10\n");
					break;
			case 10:
					printf("You entered 20\n");
					break;
			default:
					printf("Try again\n");
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int option;
	printf("Enter the value\n");
	scanf("%d", &option);

	switch (option)
	{
			case 10:
					printf("You entered 10\n");
					break;
			case 20.0:
					printf("You entered 20\n");
					break;
			default:
					printf("Try again\n");
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int option;
	int x = 10;
	printf("Enter the value\n");
	scanf("%d", &option);

	switch (option)
	{
			case x:
					printf("You entered 10\n");
					break;
			case 20:
					printf("You entered 20\n");
					break;
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int option;
	printf("Enter the value\n");
	scanf("%d", &option);

	switch (option)
	{
			case 10:
					printf("You entered 10\n");
			//		break;
			case 20:
					printf("You entered 20\n");
			//		break;
			default :
					printf("Try Again\n");
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int option;
	printf("Enter the value\n");
	scanf("%d", &option);

	switch (option)
	{
			default :
					printf("Try Again\n");
					break;
			case 10:
					printf("You entered 10\n");
					break;
			case 20:
					printf("You entered 20\n");
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int option;
	printf("Enter the value\n");
	scanf("%d", &option);

	switch (option)
	{
			int x = 100;
			case 10:
                    printf("I am in 10 here x = %d\n", x);
					break;
			case 20:
					printf("I am in 20 here x = %d\n", x);
					break;
			default :
					x = 200;
					printf("I am in default here x = %d\n", x);
					printf("Try Again\n");
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int option;
	printf("Enter the value\n");
	scanf("%d", &option);
	int x = 100;

	switch (option)
	{
			printf("Emertxe\n");
			case 10:
					printf("I am in 10 here x = %d\n", x);
					break;
			case 20:
					printf("I am in 20 here x = %d\n", x);
					break;
			default :
					x = 200;
					printf("I am in default here x = %d\n", x);
					printf("Try Again\n");
	}

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int option;
	printf("Enter the value\n");
	scanf("%d", &option);

	switch (option)
	{
			case 10:
					int x = 100;
					printf("I am in 10 here x = %d\n", x);
					break;
			case 20:
					int y = 100;
					printf("I am in 20 here y = %d\n", y);
					break;
			default :
					int z = 300;
					printf("I am in default here z = %d\n", z);
					printf("Try Again\n");
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int option;
	printf("Enter the value\n");
	scanf("%d", &option);

	switch (option)
	{
			case 10:
					{
							int x = 100;
							printf("I am in 10 here x = %d\n", x);
					}
					break;
			case 20:
					{
							int y = 100;
							printf("I am in 20 here y = %d\n", y);
					}
					break;
			default :
					printf("Try Again\n");
	}

	return 0;
}
#endif
#if 0 
#include <stdio.h>

int main()
{
	int option;
	printf("Enter the value\n");
	scanf("%d", &option);

	switch (option)
	{
			case 10, 12, 15:
					printf("You entered 10, 12, 15\n");
					break;
			case 20, 25, 29:
					printf("You entered 20, 25, 29\n");
					break;
			default:
					printf("Try again\n");
	}

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int option;
	printf("Enter the value\n");
	scanf("%d", &option);

	switch (option)
	{
			case 10 ... 20:
					printf("You entered 10 to 20\n");
					break;
			case 21 ... 30:
					printf("You entered 21 to 30\n");
						break;
			default :
					printf("Try Again\n");
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
		int option;
		printf("Enter the value\n");
		scanf("%d", &option);

		switch (option)
		{
				case 10 ... 20:
						printf("You entered 10 to 20\n");
						break;
				case 20 ... 30:
						printf("You entered 20 to 30\n");
						break;
				default :
						printf("Try Again\n");
		}

		return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
		int option;
		printf("Enter the value\n");
		scanf("%d", &option);

		switch (option)
		{
				case 10...20:
						printf("You entered 10 to 20\n");
						break;
				case 21...30:
						printf("You entered 21 to 30\n");
						break;
				default :
						printf("Try Again\n");
		}

		return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
		char option;
		printf("Enter the value\n");
		scanf("%c", &option);

		switch (option)
		{
				case 'A':
						printf("You entered 'A'\n");
						break;
				case 'a':
						printf("You entered 'a'\n");
						break;
				case '@':
						printf("You entered '@'\n");
						break;
				default:
						printf("Try again\n");
		}

		return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
		char option;
		printf("Enter the value\n");
		scanf("%c", &option);

		switch (option)
		{
				case 0101:
						printf("You entered 'A'\n");
						break;
				case 0x61:
						printf("You entered 'a'\n");
						break;
				case '@':
						printf("You entered '@'\n");
						break;
				default:
						printf("Try again\n");
		}

		return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
		char option;
		printf("Enter the value\n");
		scanf("%c", &option);

		switch (option)
		{
				case 0101:
						printf("You entered 'A'\n");
						break;
				case 0x41:
						printf("You entered 'A'\n");
						break;
				case 65:
						printf("You entered 'A'\n");
						break;
				case 0b01000001:
						printf("You entered 'A'\n");
						break;
				default:
						printf("Try again\n");
		}

		return 0;
}
#endif
