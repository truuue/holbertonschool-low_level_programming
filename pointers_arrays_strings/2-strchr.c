#include <stdio.h>
#include "main.h"

/**
 * _strchr - main
 * @s: string
 * @c: char
 * Return: S
 */

char *_strchr(char *s, char c)
{
	for (; *s != c; s++)
	{
		if (*s == '\0')
			return (0);
	}

	return (s);
}
