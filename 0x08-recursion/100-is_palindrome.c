#include "main.h"

/**
 * find_strlen - find length of a string.
 * @s: The string to check.
 *
 * Return: Length of the string.
 */

int find_strlen(char *s)
{
	int length = 0;

	if (*(s + length))
	{
		length++;
		length += find_strlen(s + length);
	}

	return (length);
}

/**
 * check_palindrome - Checks if a string is palindrome.
 * @s: The string to be checked.
 * @length: The length of s.
 * @index: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 * If the string is not a palindrome - 0.
 */

int check_palindrome(char *s, int length, int index)
{
	if (s[index] == s[length / 2])
		return (1);

	if (s[index] == s[length - index - 1])
		return (check_palindrome(s, length, index + 1));

	return (0);
}

/**
 * is_palindrome - Checks if string is palindrome.
 * @s: string to be checked.
 *
 * Return: If the string is palindrome - 1.
 * If the string is not palindrome - 0.
 */

int is_palindrome(char *s)
{
	int index = 0;
	int length = find_strlen(s);

	if (!(*s))
		return (1);
	
	return (check_palindrome(s, length, index));
}
