#include <stdio.h>
#include "main.h"

/**
 * print_square - print square logic ?
 * @beta: size
 */
void print_square(int beta)
{
	int alpha, sigma;

	for (alpha = 0; alpha < beta; alpha++)
	{
		for (sigma = 0; sigma < beta; sigma++)
		{
			putchar('#');
		}
		if (alpha != beta - 1)
			putchar('\n');
	}
	putchar('\n');
}
