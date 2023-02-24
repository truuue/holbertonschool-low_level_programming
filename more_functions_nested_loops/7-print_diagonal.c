#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - entry
 * @beta: printed char
 */
void print_diagonal(int beta)
{
	int alpha, sigma;

	for (alpha = 0; alpha < beta; alpha++)
	{
		for (sigma = 0; sigma < alpha; sigma++)
		{
			putchar(' ');
		}
		putchar(92);
		if (alpha < (beta - 1))
			putchar('\n');
	}
	putchar('\n');
}
