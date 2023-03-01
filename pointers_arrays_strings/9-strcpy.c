#include <stdio.h>
#include "main.h"

/**
 * _strcpy - *dest *src
 * @dest: pointer
 * @src: pointer
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	for (; src[a] != '\0'; a++)
		dest[a] = src[a];

	dest[a] = '\0';
	return (dest);
}
