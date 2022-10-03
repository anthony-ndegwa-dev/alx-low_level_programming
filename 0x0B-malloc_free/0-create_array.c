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
	unsigned int i = 0;

	z = malloc(size * sizeof(char));

	if (z == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		z[i] = c;
		i++;
	}
	return (z);
