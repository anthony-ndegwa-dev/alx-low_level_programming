#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: string to change
 *
 * Return: pointer to converted string
 */

char *string_toupper(char *s)
{
	int x = 0;

	while (*(s + x))
	{
		if (*(s + x) >= 'a' && *(s + x) <= 'z')
			*(s + x) -= 'a' - 'A';
		x++;
	}
	return (s);
}
