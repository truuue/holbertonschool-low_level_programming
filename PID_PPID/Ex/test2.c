#include <stdio.h>

int main(void)
{
	int sigma;

	for (sigma = 1; sigma <= 100; sigma++)
	{
		if ((sigma % 3) == 0 && (sigma % 5) == 0)
			printf("FizzBuzz");

		else if ((sigma % 3) == 0)
			printf("Fizz");

		else if ((sigma % 5) == 0)
			printf("Buzz");

		else
			printf("%d", sigma);

		if (sigma == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}