#include <stdio.h>
#include "main.h"

/**
 * print_line - entry
 * @chad: _
 */
void print_line(int n)
{
	int alpha;

	if (n > 0)
	{
		for (alpha = 0; alpha < n; alpha++)
			putchar('_');
	}

	putchar('\n');

}
