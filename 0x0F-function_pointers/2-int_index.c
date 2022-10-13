#include "function_pointers.h"
#include <stdio.h>

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
	int i, r;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			r = cmp(array[i]);
			if (r)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
