#include "holberton.h"

/**
 * print_square - prints size x size square
 * @size: dimensions of square
 *
 * Return: void
 */
void print_square(int size)
{
	int size2 = size, i;

	size <= 0 ? _putchar('\n') : size;
	for (; size > 0; size--)
	{
		for (i = size2; i > 0; i--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
