#include <stdio.h>
#include "main.h"

/**
 *swap_int - entry point
 *@a: a value
 *@b: b value
 */

void swap_int(int *a, int *b)
{
	int moov = *a;
	*a = *b;
	*b = moov;
}
