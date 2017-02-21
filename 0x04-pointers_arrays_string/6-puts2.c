#include "holberton.h"
#define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))

/**
 * puts2 - prints every other char from a string
 * @str: input string
 *
 * Return: void
 */
void puts2(char *str)
{
	int length = ARRAY_SIZE(str), let;

	for (let = 0; let <= length; let += 2)
		_putchar(str[let]);
	_putchar('\n');
}
