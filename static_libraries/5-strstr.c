#include <stdio.h>
#include "main.h"

/**
 * _strstr - main
 * @g: char string
 * @f: char string
 * Return: null
 */

char *_strstr(char *g, char *f)
{
	int a, b;

	for (a = 0; g[a]; a++)
	{
		for (b = 0; f[b]; b++)
			if (g[a + b] != f[b])
				break;

		if (f[b] == '\0')
			return (g + a);
	}
	return ('\0');
}
