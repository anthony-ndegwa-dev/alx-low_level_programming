#include "holberton.h"

/**
 * print_alphabet - Prints alphabet in lowercase
 *
 * Return: Null
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}