#include <stdio.h>
#include "main.h"

/**
 * puts2 - main
 * @str: pointer
 */

void puts2(char *str)
{
	int a = 0;

	for (; str[a] != '\0'; a++)
	{
		if ((a % 2) == 0)
			putchar(str[a]);
		else
			continue;
	}
	putchar('\n');
}
