#include "main.h"
#include <stdio.h>

/**
 * print_array - Function that prints n elements of
 *               an array of integers, followed by a new line.
 * @str: The input string
 *
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int x = 0;

	for (; x < n; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
			printf(", ");
	}

	putchar('\n');
}
