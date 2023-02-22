#include <stdio.h>
#include "main.h"

/**
 *jack_bauer - Entry point
 *alpha = hour, sigma = minutes
 *Return: every minute of the day of Jack Bauer
 */

void jack_bauer(void)
{
int alpha, sigma;
for (alpha = 0; alpha < 24; alpha++)
{
for (sigma = 0; sigma < 60; sigma++)
{
_putchar((alpha / 10) + '0');
_putchar((alpha % 10) + '0');
_putchar(':');
_putchar((sigma / 10) + '0');
_putchar((sigma % 10) + '0');
_putchar('\n');
}
}
}
