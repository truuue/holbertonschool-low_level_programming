#include <stdio.h>
#include "main.h"

/**
 * print_triangle - print triangle logic ?
 * @beta: size
 */
void print_triangle(int beta)
{
	int alpha, sigma;

	for (alpha = 0; alpha < beta; alpha++)
	{
		for (sigma = 1; sigma < (beta - alpha); sigma--)
			putchar(' ');

		for (sigma--; sigma < beta; sigma++)
			putchar('#');

		if (alpha < (beta - 1))
			continue;

		putchar('\n');
	}
	putchar('\n');
}
