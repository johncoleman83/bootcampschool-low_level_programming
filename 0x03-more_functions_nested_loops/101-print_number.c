#include "holberton.h"

/**
 * print_number - prints # using _putchar function
 * @n: the integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int copy = n, size = 1, nth;

	if (copy < 0)
	{
		copy *= -1;
		n *= -1;
		_putchar('-');
	}
	if (copy < 10)
		_putchar(copy + '0');
	else
	{
		while (copy / 10 != 0)
		{
			copy /= 10;
			size *= 10;
		}
		while (size > 1)
		{
			nth = n / size;
			_putchar('0' + nth);
			n -= nth * size;
			size /= 10;
		}
		_putchar('0' + n);
	}
}
