#include <stdio.h>
#include "main.h"

/**
 * print_rev - reverse print
 * @s: string
 */

void print_rev(char *s)
{
	int a = 0;
	int b, c;

	for (b = 0; s[b] != '\0'; b++)
		a++;

	for (c = (a - 1); c >= 0; c--)
		putchar(s[c]);

	putchar('\n');
}
