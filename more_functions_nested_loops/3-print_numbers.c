#include <stdio.h>
#include "main.h"

/**
 * print_numbers - entry
 *
 * Return: numbers
 */
void print_numbers(void)
{
	int sigma;

	for (sigma = 0; sigma <= 9; sigma++)
		putchar(sigma + '0');
	putchar('\n');
}
