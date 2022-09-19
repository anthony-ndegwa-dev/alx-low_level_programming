#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - random password generator for 101-crackme.
 *
 * Return: always 0
 */

int main(void)
{
	int a, x, v, n;
	char r[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char p[58];

	srand(time(NULL));
	while (n != 2772)
	{
		a = v = n = 0;
		while ((2772 - 122) > n)
		{
			x = rand() % 62;
			p[a] = r[x];
			n += r[x];
			a++;
		}
		while (r[v])
		{
			if (r[v] == (2772 - n))
			{
				p[a] = r[v];
				n += r[v];
				a++;
				break;
			}
			v++;
		}
	}
	p[a] = '\0';
	printf("%s", p);
	return (0);
}
