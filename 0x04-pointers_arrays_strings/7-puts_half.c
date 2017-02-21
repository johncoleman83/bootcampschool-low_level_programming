#include "holberton.h"

/**
 * puts_half - prints half the string
 * @str: input string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int c, length;

	for (length = 0; str[length] != 0; length++);
	for (c = length / 2 + (length % 2 == 0 ? 0 : 1); c <= length; c++)
		_putchar(str[c]);
	_putchar('\n');
}
