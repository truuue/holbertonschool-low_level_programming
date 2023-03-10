#include <stdio.h>
#include "main.h"

/**
 * _strspn - main
 * @s: char
 * @accept: char
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int count;

	a = 0;
	count = 0;

	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				count++;
				break;
			}
			b++;
		}
		if (accept[b] == '\0')
		{
			break;
		}
		a++;
	}
	return (count);
}
