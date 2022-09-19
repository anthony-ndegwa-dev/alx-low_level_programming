#include "main.h"

/**
 * puts2 - A function that prints every other character
 *         of a string, starting with the first character,
 *         followed by a new line.
 * @str: The input string
 *
 * Return: Always 0
 */

void puts2(char *str)
{
	int len = 0, x = 0;

	while (str[len] != '\0')
		len++;

	len -= 1;

	for (; x <= len; x += 2)
		_putchar(str[x]);

	_putchar('\n');
}
