#include <stdio.h>
#include "main.h"

/**
 * reverse_array - main
 * @n: n
 * @a: pointer
 */

void reverse_array(int *a, int n)
{
	int b = 0, t;

	for (; b < n / 2; b++)
	{
		t = a[b];
		a[b] = a[n - 1 - b];
		a[n - 1 - b] = t;
	}
}
