#include <stdio.h>
#include "main.h"

/**
 *print_array - main
 *@a: pointer
 *@n: print 
 */

void print_array(int *a, int n)
{
	int b = 0;

	for (; b < n; b++)
	{
		printf("%d", a[b]);

		if (b != n - 1)
			printf(", ");
	}
	printf("\n");
}
