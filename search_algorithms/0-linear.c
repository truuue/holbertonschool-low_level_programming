#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the Linear search algorithm
 * Return: if NULL, your function must return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t n = 0;

	if (array == NULL)
	{
		return(-1);
	}

	for (;n < size; n++)
	{
		printf("Value checked array[%lu] = [%d]\n", n, array[n]);
		if (array[n] == value)
		{
			return(1);
		}
	}
	return (-1);
}
