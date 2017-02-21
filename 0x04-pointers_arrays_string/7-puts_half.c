#include "holberton.h"
#define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))

/**
 * puts_half - prints half the string
 * @str: input string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int let, length = ARRAY_SIZE(str) + 1;

	for (let = length / 2 + 1; let <= length; let++)
		_putchar(str[let]);
	_putchar('\n');
}
