#include "holberton.h"

/**
 * print_triangle - prints n length line
 * @size: length of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, size2;

	if (size < 1)
		_putchar('\n');
	for (size2 = size; size2 > 0; size2--)
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
