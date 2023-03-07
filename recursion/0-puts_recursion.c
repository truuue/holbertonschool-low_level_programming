#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - main
 * @s: string
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		s++;
		_puts_recursion(s);
	}

	else
		putchar('\n');
}
