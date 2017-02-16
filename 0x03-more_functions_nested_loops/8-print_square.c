#include "holberton.h"

/**
 * print_square - prints size x size square
 * @size: dimensions of square
 *
 * Return: void
 */
void print_square(int size)
{
	int i, size2 = size;

	if (size < 1)
		_putchar('\n');
	for (; size > 0; size--)
	{
		for (i = size2; i > 0; i--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
