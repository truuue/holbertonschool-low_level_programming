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
	char *s;
	unsigned int i = 0, x = 0, a = 0, b = 0;

	for (; s1 && s1[a]; a++)

	for (; s2 && s2[b]; b++)

	if (n < b)
		s = malloc(sizeof(char) * (a + n + 1));
	else
		s = malloc(sizeof(char) * (a + b + 1));

	if (!s)
		return (NULL);

	while (i < a)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < b && i < (a + n))
		s[i++] = s2[x++];

	while (n >= b && i < (a + b))
		s[i++] = s2[x++];

	s[i] = '\0';

	return (s);
}
