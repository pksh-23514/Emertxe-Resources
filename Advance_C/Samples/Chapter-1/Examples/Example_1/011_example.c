#if 1
#include <stdio.h>

int main()
{
		int iter;

		iter = 0;
		while (iter < 5)
		{
				printf("Looped %d times\n", iter);
				iter++;
		}
		
		return 0;
}
#endif 
#if 0
#include <stdio.h>

int main()
{
		int iter;

		iter = 0;
		while (iter < 5);
		{
				printf("Looped %d times\n", iter);
				iter++;
		}
		
		return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
		int iter;

		iter = 0;
		while (iter++ < 5);
		{
				printf("Looped %d times\n", iter);
				iter++;
		}
		
		return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
		int iter;

		iter = 0;
		while (iter++ < 5)
		{
				printf("Looped %d times\n", iter);
		}
		printf("Outside iter = %d\n", iter);
		return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
		int iter;

		iter = 0;
		while (++iter < 5)
		{
				printf("Looped %d times\n", iter);
		}
		printf("Outside iter = %d\n", iter);
		return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
		int iter;

		iter = 0;
		while (iter < 5)
		{
				printf("Looped %d times\n", iter++);
		}
		printf("Outside iter = %d\n", iter);
		return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
		int iter;

		iter = 0;
		while (iter < 5)
				printf("Looped %d times\n", iter);
				iter++;

		return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
		int iter;

		iter = 0;
		while (iter < 5)
				printf("Looped %d times\n", iter++);

		return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
		int iter;

		iter = 0;
		while (++iter < 5);
		{
				printf("Looped %d times\n", iter);
		}
		return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
		int iter;

		iter = 0;
		while (++iter < 20)
		{
				printf("Looped %d times\n", ++iter);
		}
		return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
		int iter;

		iter = 0;
		while (iter++ < 20)
		{
				printf("Looped %d times\n", iter++);
		}
		printf("outside %d times\n", iter);
		return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
		int iter;

		iter = 0;
		while ( )
		{
				printf("Looped %d times\n", iter);
				iter++;
		}
		
		return 0;
}
#endif 


#if 0
#include <stdio.h>

int main()
{
		int iter = 0;
		while (1)
		{
				printf("Looped %d times\n", iter);
				iter++;
		}
		
		return 0;
}
#endif 



















