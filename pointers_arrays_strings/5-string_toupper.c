#include <stdio.h>
#include "main.h"

/**
 * string_toupper - main
 * @s: string
 * Return: S string
 */

char *string_toupper(char *s)
{
	int a = 0;

	for (; s[a] != '\0'; a++)
	{
		if (s[a] >= 97 && s[a] <= 122)
			s[a] -= 32;
	}

	return (s);
}
