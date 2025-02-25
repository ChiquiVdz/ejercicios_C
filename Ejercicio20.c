#include <stdio.h>

main ()
{
	int i;
	
	for (i = 0; i < 256; i++)
	{
		printf("%c\t", i);
		
		if (i % 14 == 0)
			printf("\n");
	}	
}
