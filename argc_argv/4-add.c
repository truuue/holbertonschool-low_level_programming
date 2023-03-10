#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main
 * @argc: number
 * @argv: array
 * Return: 0 success else if 1
 */

int main(int argc, char *argv[])
{
	int a = 1; 
	int b, c = 0;

	for (; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		c += atoi(argv[a]);
	}
	printf("%d\n", c);
	return (0);
}
