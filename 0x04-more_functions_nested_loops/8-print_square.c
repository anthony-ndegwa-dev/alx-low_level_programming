#include "main.h"

/**
 * print_square - Prints square using #.
 * @size: Size of the square.
 *
 * Return: Always 0
 */

void print_square(int size)
{
	int width, height;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
				_putchar('#');

			if (height == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}

