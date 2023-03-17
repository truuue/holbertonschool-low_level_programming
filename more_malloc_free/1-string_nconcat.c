#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - main
 * @s1: string 1
 * @s2: string 2
 * @n: n
 * Return: pointer to result the string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, x, a, b;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)

	for (x = 0; s2[x] != '\0'; x++)

	if (n >= x)
		n = x;

	else
		x = n;

	p = malloc(sizeof(char) * (i + x) + 1);
	
	if (p == NULL)
		return (NULL);

	for (a = 0; a < i; a++)
		p[a] = s1[a];

	for (b = 0; b < x; b++, a++)
		p[a] = s2[b];

	p[a] = '\0';

	return (p);
}
