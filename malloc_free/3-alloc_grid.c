#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - main
 * @width: width
 * @height: height
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i, x;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			for (; i >= 0; i--)
				free(a[i]);

			free(a);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (x = 0; x < width; x++)
			a[i][x] = 0;
	}
	return (a);
}
