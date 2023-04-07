#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * @n: first number
 * @m: second number
 * Return: the number of bits needed to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int count = 0;

	diff = n ^ m;
	while (diff)
	{
		count++;
		diff &= (diff - 1);
	}
	return (count);
}
