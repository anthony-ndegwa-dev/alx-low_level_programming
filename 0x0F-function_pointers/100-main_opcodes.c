#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of itself.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	opcode = (unsigned char *)main;
	i = 0;
	if (bytes > 0)
	{
		while (i < (bytes - 1))
			printf("%02hhx ", opcode[i++]);
		printf("%hhx\n", opcode[i]);
	}
	return (0);
}
