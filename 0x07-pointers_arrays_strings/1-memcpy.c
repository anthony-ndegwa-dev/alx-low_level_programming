#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area destination to copy to
 * @src: memory area source to copy from
 * @n: number of bytes
 *
 * Return: pointer to copy location
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *alpha = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (alpha);
}
