#include <stdlib.h>
#include "main.h"

/**
 * array_range - main
 * @min: int
 * @max: int
 * Return: if min > max null
 */

int *array_range(int min, int max)
{
	int *r;
	int i, x;

	if (min > max)
		return (NULL);

	x = max - min;

	r = malloc(sizeof(*r) * (x + 1));

	if (r == NULL)
		return (NULL);

	for (i = 0; i <= x; i++)
		r[i] = min + i;

	return (r);
}
