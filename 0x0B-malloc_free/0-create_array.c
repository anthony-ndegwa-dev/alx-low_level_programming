#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 *                and initializes it with a specific char.
 * @size: The size of the array
 * @c: A character to initialized the array
 * Return: Apointer to the array or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *z;
	unsigned int i;

	if (size == 0)
		return (NULL);

	z = malloc(sizeof(char) * size);

	if (z == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		z[i] = c;

	return (z);
}
