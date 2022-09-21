#include "main.h"

/**
 * reverse_array - function reversing content of array of integers.
 * @a: integer array to be reversed
 * @n: length of array a
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x = 0, z;
	n = n - 1;

	while (x < n)
	{
		z = *(a + x);
		*(a + x) = *(a + n);
		*(a + n) = z;
		x++;
		n--;
	}
}
