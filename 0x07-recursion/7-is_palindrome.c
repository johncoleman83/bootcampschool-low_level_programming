#include "holberton.h"
/**
 * string_length - finds string length
 * @st: input string
 * Return: integer length
 */
int string_length(char *st)
{
	if (*st == '\0')
		return (0);
	return (string_length(++st) + 1);
}
/**
 * check_letters - check if numbers are equal
 * @str: input string
 * @i: beginning index
 * @j: ending index
 * Return: boolean
 */
int check_letters(char *str, int i, int j)
{
	if ((j - i) < 2)
		return (1);
	if (str[i] != str[j])
		return (0);
	return (check_letters(str, ++i, --j));
}
/**
 * is_palindrome - checks if string is palindrom
 * @s: input string
 * Return: boolean
 */
int is_palindrome(char *s)
{
	int len = string_length(s);

	if (len == 0)
		return (0);
	return (check_letters(s, 0, --len));
}
