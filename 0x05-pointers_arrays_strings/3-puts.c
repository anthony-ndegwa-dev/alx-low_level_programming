#include "main.h"

/**
 * _puts - Prints a string, and new line to stdout.
 * @str: Input string pointer
 *
 * Return: Always 0
 */

void _puts(char *str)
{
	int x = 0;

	while (str[x] != '0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
