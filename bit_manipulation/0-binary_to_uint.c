#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string
 * Return: the converted number or 0 if b is null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '0' || *b == '1')
			result = (result << 1) | (*b - '0');
		else
			return (0);
		b++;
	}
	return (result);
}
