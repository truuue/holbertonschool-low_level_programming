#include <stdio.h>
#include "main.h"

/**
 * leet - main
 * @s: string
 * Return: s
 */

char *leet(char *s)
{
	int a, b;
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (letters[b] == s[a])
				s[a] = num[b];
		}
	}
	return (s);
}
