#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0, c;
	char *copy;

	for (c = 0; s[c] != 0; c++, length++)
		*(copy + c) = s[c];

	for (c = 0; length >= 0; length--, c++)
		s[c] = *(copy + length);
}
