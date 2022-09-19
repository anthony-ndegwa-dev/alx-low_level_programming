#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: an input string
 *
 * Return: Always 0
 */

void rev_string(char *s)
{
	int len = 0, x = 0;
	char n;

	while (s[len] != '\0')
		len++;

	while (x < len--)
	{
		n = s[x];
		s[x++] = s[len];
		s[len] = n;
	}
}
