#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * 		in an array of integers.
 * @array: The array of integers.
 * @size: The size of the array.
 * @cmp: A pointer to the function to be used to compare values.
 * Return: index of the first element for witch the cmp function
 * 	does not return 0; -1 if no elements matches or size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
