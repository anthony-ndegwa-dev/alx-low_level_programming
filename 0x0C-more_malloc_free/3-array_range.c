#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers.
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *new_array;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min;
	new_array = malloc((size + 1) * sizeof(int));
	if (new_array == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		new_array[i] = min++;

	return (new_array);
}
