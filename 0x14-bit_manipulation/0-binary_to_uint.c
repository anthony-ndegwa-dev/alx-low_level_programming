#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: Converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0, y = 1;
	int len;

	if (b == '\n')
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		x += (b[len] - '0') * y;
		y *= 2;
	}

	return (x);
}	
