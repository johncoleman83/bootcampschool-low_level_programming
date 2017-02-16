#include "holberton.h"

/**
 * print_triangle - prints n length line
 * @size: length of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, size2 = size;

	size <= 0 ? _putchar('\n') : size;

	for (; size2 > 0; size2--)
	{
		for (i = size2; i > 1; i--)
		{
			_putchar(' ');
		}
		for (i--; i <= size - size2; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
