#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * _atoi - main
 * @s: pointer
 * Return: int
 */

int _atoi(char *s)
{
	int result = 0, sign = 1;

	while ((*s < '0' || *s > '9') && *s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		if (result > INT_MAX / 10 ||
				(result ==  INT_MAX / 10 && *s - '0' > INT_MAX % 10))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		result = 10 * result + (*s - '0');
		s++;
	}

	return (sign * result);
}
