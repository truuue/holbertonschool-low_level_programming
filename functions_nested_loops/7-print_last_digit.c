#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_abs - Entry point
 *@sigma: The input number
 *Return: Always 0
 */
int print_last_digit(int sigma)
{
int alpha;
alpha = sigma % 10;
if (alpha < 0)
{
_putchar(-1 + 0);
return (-1);
}
else
{
_putchar(1 + 0);
return (1);
}
}
