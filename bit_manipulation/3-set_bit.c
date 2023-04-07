#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to the unsigned long int to modify
 * @index: starting from 0 of the bit you want to set
 * Return: 1 on success, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = ((1 << index) | *n);
	return (1);
}
