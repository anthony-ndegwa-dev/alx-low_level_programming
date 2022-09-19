#include "main.h"

/**
 * _strcpy - Function that copies the string pointed to by src,
 *           including the terminating null byte (\0),
 *            to the buffer pointed to by dest.
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *vex = dest;

	while (*src)
		*dest++ = *src++;
	return (*vex);
}
