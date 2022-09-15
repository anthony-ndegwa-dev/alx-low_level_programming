#include "main.h"

/**
 * print_sign - Prints the sign of number.
 * @n: The number which a sign is printed.
 *
 * Return: 1 if number is greater than zero,
 *         0 if number is 0, or -1 if number is less than 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
