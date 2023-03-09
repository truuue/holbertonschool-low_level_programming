#include <stdio.h>
#include "main.h"

/**
 * is_prime - other function
 * @n: int
 * @i: int
 * Return: 1 prime, 0 no prime
 */

int is_prime(int n, int i)
{
	if (n % i == 0)
		return (0);

	else if (i == 1)
		return (1);

	return (is_prime(n, i - 1));
}

/**
 * is_prime_number - main
 * @n: int
 * Return: 1 prime, 0 no prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime(n, n - 1));
}
