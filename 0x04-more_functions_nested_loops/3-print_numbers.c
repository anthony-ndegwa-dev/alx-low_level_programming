#include "main.h"

/**
 * print_numbers - Print numbers from 0-9.
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
