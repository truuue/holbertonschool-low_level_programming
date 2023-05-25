#include "search_algos.h"

/**
 * linear_search - searches value in int array using Linear search algorithm
 * Return: if NULL, your function must return -1
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 */
int linear_search(int *array, size_t size, int value)
{
	size_t n = 0;

	if (array == NULL)
	{
		return (-1);
	}

	for (; n < size; n++)
	{
		printf("Value checked array[%lu] = [%d]\n", n, array[n]);
		if (array[n] == value)
		{
			return (n);
		}
	}
	return (-1);
}
