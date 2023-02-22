#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *print_last_digit - Entry point
 *@sigma: The input number
 *Return: The last digit
 */
int print_last_digit(int sigma)
{
int alpha;
alpha = sigma % 10;
if (alpha < 0)
{
alpha = alpha * -1;
}
_putchar(alpha + '0');
return (alpha);
}
