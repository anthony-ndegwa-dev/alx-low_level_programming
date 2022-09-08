#include <stdio.h>
/**
 * main - Entry point
 * Write a C program that prints the size of various types on the computer it is compiled and run on
 * Should return 0
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Char size: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Int size: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Float size: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
