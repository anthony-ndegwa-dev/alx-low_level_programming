#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: The input string
 *
 * Return: Always 0
 */

void puts_half(char *str)
{
	int len = 0, x, i;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len + 1) / 2;

	for (x = i; x < len; x++)
		_putchar(str[x]);

	_putchar('\n');
}
