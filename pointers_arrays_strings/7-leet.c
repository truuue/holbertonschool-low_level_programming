#include <stdio.h>
#include "main.h"

/**
 * leet - main
 * @s: string
 * Return: s
 */

char *leet(char *s)
{
	int i, x;
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i]; i++)
	{
		for (x = 0; letters[x]; x++)
		{
			if (letters[x] == s[i])
				s[i] = num[x];
		}
	}
	return (s);
}
