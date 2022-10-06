#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings.
 * @s1: Input pointer of the first string
 * @s2: Input pointer of the second string
 * @n: an input integer of number of string to concatenate
 *
 * Return: Apointer to concatened strings or NULL if it str is NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *formed_str;
	unsigned int i = 0, lens1 = 0, lens2 = 0;

	if (s1 == NULL)
		s1 = "";

	while (s1[lens1])
		lens1++;

	if (s2 == NULL)
		s2 = "";

	while (s2[lens2])
		lens2++;

	if (n >= lens2)
		n = lens2;

	formed_str = malloc(lens1 + n + 1);
	if (formed_str == NULL)
		return (NULL);

	for (; i < (lens1 + n); i++)
	{
		if (i < lens1)
			formed_str[i] = *s1, s1++;
		else
			formed_str[i] = *s2, s2++;
	}

	formed_str[i] = '\0';
	return (formed_str);
