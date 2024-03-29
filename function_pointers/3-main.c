#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main function
 * @argc: arg count
 * @argv: string in array
 * Return: 0
 */

int main(int argc, char **argv)
{
	int a, b;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operation = get_op_func(argv[2]);

	if (operation == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", operation(a, b));

	return (0);
}
