#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse.
 * @s: The input string pointer
 *
 * Return: Always 0
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s[len] != '\0')
		len++;

	while (len)
		_putchar(*s[--len]);

	_putchar('\n');
}
