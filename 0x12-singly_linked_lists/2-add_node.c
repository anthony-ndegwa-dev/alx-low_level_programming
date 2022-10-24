#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - determines length of a string
 * @str: string to find the length
 *
 * Return: length of string
 */

unsigned int _strlen(char *str)
{
	unsigned int x;

	for (x = 0; str[x]; x++)
		;
	return (x);
}

/**
 * add_node - adds node in the beginning of a linked list
 * @head: double pointer to a linked list
 * @str: string to be added to the new node
 *
 * Return: pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
