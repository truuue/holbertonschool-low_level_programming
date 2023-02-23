#include <stdio.h>
#include "main.h"

/**
 * more_numbers - the numbers
 */
void more_numbers(void)
{
	int alpha, sigma;

	for (alpha = 0; alpha <= 9; alpha++)
	{
		for (sigma = 0; sigma <= 14; sigma++)
		{
			if (sigma > 9)
				putchar((sigma / 10) + '0');
			putchar((sigma % 10) + '0');
		}
		putchar('\n');
	}
}
