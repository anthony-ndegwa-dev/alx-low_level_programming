#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143.
 *
 * Return: Always 0.
 */

int main(void)
{
	long prime = 612852475143, index;

	while (index < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (div = 3; div < (prime / 2); div += 2)
		{
			if ((prime % index) == 0)
				prime /= index;
		}
	}

	printf("%ld\n", prime);

	return (0);
}
