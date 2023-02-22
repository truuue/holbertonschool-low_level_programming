#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
int sigma;
int a = 0;

 while (a <= 9)
{
for (sigma = 'a'; sigma <= 'z'; sigma++)
{
_putchar(sigma);
}
_putchar('\n');
a++;
}
}
