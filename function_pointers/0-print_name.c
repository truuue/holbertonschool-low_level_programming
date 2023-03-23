#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name
 * @f: pntr to func
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);

	else
		return;
}
