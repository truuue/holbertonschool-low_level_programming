#include <stdio.h>
#include "main.h"

/**
 *puts_half - main
 *@str: string
 */

void puts_half(char *str)
{
	int a, b, c;

	c = 0;

	for (a = 0; str[a] != '\0'; a++)
		c++;

	b = (c / 2);

	if ((c % 2) == 1)
		b = ((c + 1) / 2);

	for (a = b; str[a] != '\0'; a++)
		putchar(str[a]);
	putchar('\n');
}
