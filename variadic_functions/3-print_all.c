#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - print char
 * @ap: char
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}


/**
 * print_int - print int
 * @ap: int
 */

void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}


/**
 * print_float - print float
 * @ap: float
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}


/**
 * print_string - print string
 * @ap: string
 */

void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s == NULL)
		s = "(nil)";

	printf("%s", s);
}

/**
 * print_all - print anything
 * @format: list of arg types
 */

void print_all(const char * const format, ...)
{
	print_type_t print_type[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};

	va_list ap;
	int i, j;
	char *separator = "";

	va_start(ap, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		printf("%s", separator);
		separator = "";

		j = 0;
		while (print_type[j].type != 0)
		{
			if (print_type[j].type == format[i])
			{
				print_type[j].f(ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
