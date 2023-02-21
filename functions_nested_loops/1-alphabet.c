#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
int n;

for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
_putchar('\n');
return (0);
}
