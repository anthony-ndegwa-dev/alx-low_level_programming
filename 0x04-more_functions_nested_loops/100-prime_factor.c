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

		for (index = 3; index < (prime / 2); index += 2)
		{
			if ((prime % index) == 0)
				prime /= index;
		}
	}

	printf("%ld\n", prime);

	return (0);
}
