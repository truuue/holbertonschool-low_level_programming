#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
int sigma;

for (sigma = 'a'; sigma <= 'z'; sigma++)
{
_putchar(sigma);
}
_putchar('\n');
}
