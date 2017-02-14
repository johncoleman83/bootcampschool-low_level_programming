#include "holberton.h"

/**
 * print_alphabet - prints alphabet 1x
 *
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
