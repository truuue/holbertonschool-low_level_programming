#include <stdio.h>
#include "main.h"

/**
 * _puts - main
 * @str: string char
 */

void _puts(char *str)
{
	while (*str)
	{
		putchar(*str++);
	}
	putchar('\n');
}
