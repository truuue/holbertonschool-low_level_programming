#include <stdio.h>
#include "main.h"

/**
 * main - main
 * @argc: argv number
 * @argv: array
 * Return: Always 0 success
 */

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%i\n", argc - 1);

	return (0);
}
