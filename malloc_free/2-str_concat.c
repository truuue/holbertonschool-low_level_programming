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
	char *conct;
	int i, ci;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)

	for (ci = 0; s2[ci] != '\0'; ci++)

	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);

	i = ci = 0;

	for (i = 0;s1[i] != '\0'; i++)
		conct[i] = s1[i];

	for (ci = 0; s2[ci] != '\0'; i++)
	{
		conct[i] = s2[ci];
		ci++;
	}

	conct[i] = '\0';

	return (conct);
}
