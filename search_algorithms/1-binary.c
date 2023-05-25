#include "search_algos.h"

/**
 * binary_search - searches value in int array using Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located, if array is NULL return -1
*/
int binary_search(int *array, size_t size, int value)
{
	int n;
	int mid;
	int low = 0;
	int high = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");

		n = low;
		while (n <= high)
		{
			if (n > low)
				printf(", ");
			printf("%d", array[n]);
			n++;
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;

		else
			high = mid - 1;
	}
	return (-1);
}
