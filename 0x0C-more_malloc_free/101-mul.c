#include "main.h"
#include <stdlib.h>

/**
 * main - Function that multiplies positive numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: Nothing
 */

int main(int argc, char **argv)
{
	int num1, num2, ansa;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		ansa = num1 * num2;
		printf("%d\n", ansa);
		return (0);
	}
}
