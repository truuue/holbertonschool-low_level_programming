#include <stdlib.h>
#include "main.h"

/**
 * str_concat - main
 * @s1: input one
 * @s2: input two
 * Return: s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, a, b, x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)

	for (j = 0; s2[j] != '\0'; j++)

	s = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);

	if (s == NULL)
		return (NULL);

	for (a = 0; a < i; a++)
		s[a] = s1[a];

	x = j;

	for (b = 0; b <= x; b++, a++)
		s[a] = s2[b];

	return (s);
}
