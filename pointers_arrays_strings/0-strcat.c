#include <stdio.h>
#include "main.h"

/**
 * _strcat - main
 * @src: string pointer
 * @dest: string pointer
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		continue;

	for (b = 0; src[b] != '\0'; b++)
		dest[a + b] = src[b];

	dest[a + b] = '\0';
	return (dest);
}
