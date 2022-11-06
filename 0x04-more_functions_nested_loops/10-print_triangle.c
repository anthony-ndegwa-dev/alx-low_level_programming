#include "main.h"

/**
 * print_triangle - Prints a triangle, using character #.
 * @size: Size of the triangle.
 *
 * Return: Always 0
 */

void print_triangle(int size)
{
	int block, index;

	if (size > 0)
	{
		for (block = 1; block <= size; block++)
		{
			for (index = size - block; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < block; index++)
				_putchar('#');

			if (block == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n')
}
