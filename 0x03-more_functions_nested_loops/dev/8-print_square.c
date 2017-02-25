#include "holberton.h"

/**
 * print_square - prints size x size square
 * @size: dimensions of square
 *
 * Return: void
 */
void print_square(int size)
{
	int i, size2;

	if (size < 1)
		_putchar('\n');
	for (size2 = size; size2 > 0; size2--)
	{
		for (i = size; i > 0; i--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
