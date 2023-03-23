#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - search for an int
 * @array: int array
 * @size: array size
 * @cmp: pntr
 * Return: -1 not found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
