#include "bootcamp.h"

/**
 * print_diagonal - prints n length line
 * @n: length of diagonal line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, n2 = n;

	if (n < 1)
		_putchar('\n');
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
