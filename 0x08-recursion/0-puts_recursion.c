#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: The input string to be printed.
 * Return: Void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		return(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
