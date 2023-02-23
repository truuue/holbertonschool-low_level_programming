#include <stdio.h>
/**
 *print_numbers - Entry point
 *Return: Always 0 (Success)
 */

void print_numbers(void)
{
int sigma;
for (sigma = '0'; sigma <= '9'; sigma++)
{
putchar(sigma);
}

putchar('\n');
return (0);
}
