#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to the number to modify
 * @index: index starting from 0, of the bit we want to get
 * Return: 1 on success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
