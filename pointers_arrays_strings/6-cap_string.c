#include <stdio.h>
#include "main.h"

/**
 * cap_string - main
 * @s: string
 * Return: S string
 */

char *cap_string(char *s)

{
	int a, b;
	int cap = 32;
	int separators[] = {
		' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'
	};

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z')
		{
			s[a] = s[a] - cap;
		}

		cap = 0;

		for (b = 0; b <= 12; b++)
		{
			if (s[a] == separators[b])
			{
				b = 12;
				cap = 32;
			}
		}
	}
	return (s);
}
