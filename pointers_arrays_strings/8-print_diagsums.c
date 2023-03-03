#include <stdio.h>
#include "main.h"

/**
  * print_diagsums - main
  * @a: pointer
  * @size: size
  */

void print_diagsums(int *a, int size)
{
	int b, diag1 = 0, diag2 = 0;

	for (b = 0; b < size; b++)
	{
		diag1 += a[(size + 1) * b];
		diag2 += a[(size - 1) * (b + 1)];
	}

	printf("%d, %d\n", diag1, diag2);
}
