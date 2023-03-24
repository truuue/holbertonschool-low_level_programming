#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: string print
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(list, char *);

		if (str == NULL)
			str = "(nil)";

		else
		printf("%s", str);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(strings);
	printf("\n");
}
