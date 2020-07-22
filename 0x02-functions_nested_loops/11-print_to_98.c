#include "bootcamp.h"
#include <stdlib.h>

/**
 * print_to_98 - prints all integers from n to 98
 * @n: AnInteger
 *
 * Return: void
 */
void print_to_98(int n)
{
	int a, h, t, o;

	while (n != 98)
	{
		a = abs(n), h = a / 100, t = a / 10 % 10, o = a  % 10;
		if (h > 0)
		{
			a != n ? _putchar('-') : a;
			_putchar(h + '0');
			_putchar(t + '0');
			_putchar(o + '0');
		}
		else if (t > 0)
		{
			a != n ? _putchar('-') : a;
			_putchar(t + '0');
			_putchar(o + '0');
		}
		else
		{
			a != n ? _putchar('-') : a;
			_putchar(o + '0');
		}
		_putchar(',');
		_putchar(' ');
		n < 98 ? n++ : n--;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
