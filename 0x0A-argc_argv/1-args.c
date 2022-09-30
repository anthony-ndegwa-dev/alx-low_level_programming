#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the number of arguements you passed to it
 * @argc: The argument counter
 * @argv: Argument values
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
