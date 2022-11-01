#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Returns: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int val = 1;

	char *endian = (char *)&val;

	if (*endian == 1)
		return (1);

	return (0);
}
