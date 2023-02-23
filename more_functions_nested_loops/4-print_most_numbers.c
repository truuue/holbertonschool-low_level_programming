#include <stdio.h>
#include "main.h"

/**
 *print_most_numbers - entry
 *Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
int sigma;
for (sigma = '0'; sigma <= '9'; sigma++)
{
if (sigma != '2' && sigma != '4')
{
putchar(sigma);
}
}

putchar('\n');
}

