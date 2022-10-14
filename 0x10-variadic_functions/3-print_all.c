#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_chr(va_list arg);
void print_int(va_list arg);
void print_flt(va_list arg);
void print_str(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_chr - print a char
 * @c: char to print
 *
 * Return: void
 */

void print_chr(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - prints an int
 * @i: int to print
 *
 * Return: void
 */

void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_flt - Prints a float.
 * @f: float to print
 *
 * Return: void
 */

void print_flt(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_str - Prints a string.
 * @s: string to print
 *
 * Return: void
 */

void print_str(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - Prints anything, followed by a new line.
 * @format: list of argument types passed to the function
 * @...: A variable number of arguments to be printed.
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_chr},
		{"i", print_int},
		{"f", print_flt},
		{"s", print_str}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
