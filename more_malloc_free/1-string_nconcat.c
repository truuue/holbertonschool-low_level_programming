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
	char *concat;
	int a;
	unsigned int i, x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)

	concat = malloc(sizeof(*concat) * (a + n) + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];

	for (x = 0; s2[x] != '\0' && x < n; x++)
	{
		concat[i] = s2[x];
		i++;
	}

	concat[i] = '\0';
	return (concat);
}
