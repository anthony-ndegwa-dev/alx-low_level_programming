#include "main.h"

/**
 * print_line - Draws a straight line using _ character.
 * @n: Int representing number of times _ should be printed
 *
 * Return: Always 0
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
