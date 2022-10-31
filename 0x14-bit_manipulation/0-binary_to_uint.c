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

	if (b == '\0')
		return (0);

	for 
