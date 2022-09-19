#include "main.h"
#include <stdio.h>

/**
 * swap_int -  Swaps the values of two integers.
 * @a: The first integer pointer
 * @b: Second integer pointer
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;

	_putchar('\n')
}
