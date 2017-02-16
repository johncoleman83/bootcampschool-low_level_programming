#include "holberton.h"

/**
 * print_diagonal - prints n length line
 * @n: length of diagonal line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, n2 = n;

	n <= 0 ? _putchar('\n') : n;

	for (; n2 > 0; n2--)
	{
		for (i = n - n2; i > 0; i--)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
