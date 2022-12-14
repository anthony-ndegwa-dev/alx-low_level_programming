#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to the memory area to be filled.
 * @b: character to fill the memory area with.
 * @n: number of bytes to fill.
 *
 * Return: pointer to location filled.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *alpha = s;

	while (n--)
	{
		*s = b;
		s++;
	}

	return (alpha);
}
