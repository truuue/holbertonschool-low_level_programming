#include <stdio.h>
#include "main.h"

/**
 * _sqrt - other function
 * @i: number
 * @a: *
 * Return: sqrt
 */

int _sqrt(int a, int i)
{
	if (i * i == a)
		return (i);

	else if (i * i > a)
		return (-1);

	else
		return (_sqrt(a, i + 1));
}

/**
 * _sqrt_recursion - main
 * @n: n
 * Return: square
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
