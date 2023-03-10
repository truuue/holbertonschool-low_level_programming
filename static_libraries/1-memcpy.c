#include <stdio.h>
#include "main.h"

/**
 * *_memcpy - main
 * @src: char string
 * @dest: char string
 * @n: unsigned int variable
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];

	return (dest);
}
