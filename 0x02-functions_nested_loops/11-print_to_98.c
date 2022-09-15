#include "main.h"

/**
 * print_to_98 - Prints numbers from input to 98 .
 * @n: Number to begin counting from.
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			_putchar("%d, ", n--);
		_putchar("%d\n", n);
	}
	else
	{
		while (n < 98)
			_putchar("%d, ", n++);
		_putchar("%d\n", n);
	}
}
