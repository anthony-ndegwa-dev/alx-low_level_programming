#include "main.h"

/**
 * rot13 -  a function that encodes a string using rot13.
 * @s: string to encode
 *
 * Return: An encode string
 */

char *rot13(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		while ((s[x] >= 'a' && s[x] <= 'z') || 
				(s[x] >= 'A' && s[x] <= 'Z'))
		{
			if ((s[x] >= 'a' && s[x] <= 'm') || 
					(s[x] >= 'A' && s[x] <= 'M'))
				s[x] += 13;
			else
				s[x] -= 13;
			x++;
		}
		x++;
	}
	return (s);
}
