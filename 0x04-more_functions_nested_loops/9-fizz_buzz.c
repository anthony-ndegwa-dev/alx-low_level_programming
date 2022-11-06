#include <stdio.h>

/**
 * main - Print numbers from 1-100, but for multiples of 3,
 *        Fizz is printed instead of the number, multiples of 5,
 *        Buzz, and for multiples of both 3 and 5, FizzBuzz.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (num == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}

