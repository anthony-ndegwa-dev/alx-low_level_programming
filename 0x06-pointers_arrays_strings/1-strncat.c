#include "main.h"

/**
 * _strncat - A function that concatenates two strings.
 * @dest: string to append by src
 * @src: string to append to dest
 * @n: largest number of bytes to append
 *
 * Return: Pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0;
	int x = 0;
	char *vem = dest;
	char *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;
	src = start;

	for (; x < n; x++)
		*dest++ = *src++;

	*dest = '\0';
	
	return (vem)
		_putchar('\n');
}
