#include <stdio.h>
#include "main.h"

/**
 * print_triangle - print square logic ?
 * @beta: size
 */
void print_triangle(int beta)
{
	int alpha, sigma;

	if (beta > 0)
	{
		for (alpha = 1; alpha <= beta; alpha++)
		{
			for (sigma = beta - alpha; sigma > 0; sigma--)
				putchar(' ');

			for (sigma = 0; sigma < beta; sigma++)
				putchar('#');

			if (alpha == beta)
				continue;

			putchar('\n');
		}
	}
	putchar('\n');
}
