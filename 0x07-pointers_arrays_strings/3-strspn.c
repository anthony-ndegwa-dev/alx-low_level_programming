#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: input character to be located in string s.
 *
 * Return: the number of bytes in the initial segment of s
 * 		which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0, flag;
	char *alpha = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}

		s++;
		accept = alpha;
		if (flag == 0)
			break;
	}

	return (count);
}
