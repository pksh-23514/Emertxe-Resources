#if 0
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char name[20];

	scanf("%s", name);
	printf("Name = %s\n", name);

	return 0;
}
#endif

#if 0
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char name[20];

	scanf("%[a-z A-Z]", name);
	printf("Name = %s\n", name);

	return 0;
}
#endif

#if 0
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char name[20];

	scanf("%[^\n]", name);
	printf("Name = %s\n", name);

	return 0;
}
#endif

#if 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char name[20];

	scanf("%[^m]", name);
	printf("Name = %s\n", name);

	return 0;
}
#endif










