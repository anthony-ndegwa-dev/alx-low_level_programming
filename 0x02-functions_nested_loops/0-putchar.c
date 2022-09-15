#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes character c to stdout
 *
 * Return: On  success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));

}
