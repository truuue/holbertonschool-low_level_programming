#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: strings print
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	if (separator == NULL)
		separator = "";

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char*);

		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);

		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
