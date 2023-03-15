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
	char *concat;
	int i, a = 0, b = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		a += 1;

	for (i = 0; s2[i] != '\0'; i++)
		b += 1;

	concat = malloc(a + b + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < a + b; i++)
	{
		if (i < a)
			concat[i] = s1[i];
		else
			concat[i] = s2[i - a];
	}
	return (concat);
}
