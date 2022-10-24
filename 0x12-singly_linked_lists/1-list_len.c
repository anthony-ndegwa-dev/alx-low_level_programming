#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list
 * @h: pointer to the start of the linked list
 *
 * Return: The number of elements in h.
 */

size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int x;

	tmp = h;
	for (x = 0; tmp; x++)
		tmp = tmp->next;
	return (x);
}
