#if 0
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char name[10];
	char id[10];

#if 0
	scanf("%[a-z A-Z]", name);
	printf("Name = %s\n", name);

#else
	/* Need to address an Issue here!!! */
	scanf("%[0-9]", id);
	printf("ID = %s\n", id);
#endif	
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
	char name[200];

	scanf("%[^x]", name);
	printf("Name = %s\n", name);
	
	return 0;
}
#endif








