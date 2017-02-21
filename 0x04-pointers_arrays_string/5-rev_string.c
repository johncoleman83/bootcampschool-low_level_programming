#include "holberton.h"
#define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = ARRAY_SIZE(s), let;
	char copy[ARRAY_SIZE(s) + 1];

	for (let = 0; let <= length; let++)
		copy[let] = s[let];
	for (let = 0; length >= 0; length--, let++)
		s[let] = copy[length];
	s[let] = 0;
}
