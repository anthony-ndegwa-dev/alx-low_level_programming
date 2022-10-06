#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory for an array using malloc.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 * Return: returns pointer to allocated space, or NULL on failure.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
		*(mem + i) = 0;

	return (mem);
}
