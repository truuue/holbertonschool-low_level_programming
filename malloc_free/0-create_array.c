#include <stdlib.h>
#include "main.h"
		
/**
 * create_array - create array of size size and assign char c
 * @s: size
 * @c: char
 * Return: array or NULL if fail
 */

char *create_array(unsigned int s, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * s);

	if (s == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
		str[i] = c;

	return (str);
}
