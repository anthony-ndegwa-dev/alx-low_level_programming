#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: A pointer to the memory area to be filled.
 * @c: character to fill the memory area with.
 * @n: number of bytes to fill
 *
 * Return: returns pointer to location filled
 */

char *_memset(char *s, char b, unsigned int n);
{
	char *alpha = s;

	while (n--)
	{
		*s = b;
		s++;
	}

	return (alpha);
}
