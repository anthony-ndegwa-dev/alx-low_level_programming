#include "main.h"
#include <stdio.h>

/**
 * main - the entry point for program to get header of ELF file
 * @argc: the number of arguments
 * @argv: a pointer to the array of arguments
 *
 * Return: 1 on success, error code on failure
 */

int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
