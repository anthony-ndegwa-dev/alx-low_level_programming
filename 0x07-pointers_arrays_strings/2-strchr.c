#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Returns: a pointer to the character c in the string s
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
