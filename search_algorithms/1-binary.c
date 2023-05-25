#include "search_algos.h"

int binary_checker(int *array, size_t size, int value, int left, int right)
{
	size_t n = 0;
	int mid = left + (right - left) / 2;

	if (right >= left)
	{
		printf("Searching in array: ");
		for (n = left; n <= right; n++)
		{
			if (n == right)
			{
				printf("%d", array[n]);
			}
			else
			{
				printf("%d, ", array[n]);
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] > value)
		{
			return (binary_checker(array, value, left, mid - 1, size));
		}
		return (binary_checker(array, value, mid + 1, right, size));
	}
	return (-1);
}

int binary_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);

	index = binary_checker(array, value, 0, size - 1, size);
	return (index);
}
