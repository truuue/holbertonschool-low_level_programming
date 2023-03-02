#include <stdio.h>
#include "main.h"

/**
 * _strncat - main
 * @dest: string
 * @src: string
 * @n: n
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (c = 0; src[c] != '\0' && n != 0 ; c++)
	{
		dest[i] = src[c];
		n--;
		i++;
	}
	return (dest);
}
