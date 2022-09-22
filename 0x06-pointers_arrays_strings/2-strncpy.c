#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: string to copy to
 * @src: string being copied
 * @n: largest number of bytes to copy
 *
 * Return: A pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;
	x = 0;

	while (x < n && *(src + x))
       	{
		*(dest + x) = *(src + x);
		x++;
	}

	while (x < n)
	{
		*(dest + x) = '\0';
		x++;
	}

	return (x);
}
