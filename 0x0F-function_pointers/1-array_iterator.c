#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as
 * 		parameter on each element of an array.
 * @array: pointer to array
 * @size: Size of the array
 * @action: pointer to the function to be executed.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
