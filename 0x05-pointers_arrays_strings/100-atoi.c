#include "main.h"

/**
 * _atoi - a function that converts string to integer
 * @s: An input string
 *
 * Return: Interger
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int vex = 0;

	char null = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		if (*s >= '0' && *s <= '9')
		{
			null = 1;
			vex = vex * 10 + *s - '0';
		}
		else if (null)
			break;
		s++;
	}
	if (sign < 0)
		vex = (-vex);
	return (vex);
}
