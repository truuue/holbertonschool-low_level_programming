#include <stdio.h>
#include "main.h"

/**
 * _strlen - main
 * @s: char
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
