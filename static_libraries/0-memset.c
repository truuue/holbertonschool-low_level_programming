#include <stdio.h>
#include "main.h"

/**
 * *_memset - main
 * @b: char string
 * @s: char string pointer
 * @n: unsigned int variable
 * Return: S string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
