#include "main.h"

/**
 * print_numbers - Prints numbers from 0-9.
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	for (num = 0; num <= '9'; num++)
		_putchar(num);

	_putchar('\n');
}
