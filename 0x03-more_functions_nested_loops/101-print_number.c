#include "holberton.h"

/**
 * print_number - prints # using _putchar function
 * @n: the integer to print
 *
 * Return: 1 if upper, 0 if not
 */
void print_number(int n)
{
	unsigned int nth, num, i = 1;

	num = n < 0 ? n * -1 : n;
	if (num < 10)
	{
		if (n < 0)
			_putchar('-');
		_putchar('0' + num);
	}
	else
	{
		while (i <= num)
		{
			i *= 10;
		}
		i /= 10;
		if (n < 0)
			_putchar('-');
		while (i > 1)
		{
			nth = num / i;
			_putchar('0' + nth);
			num -= nth * i;
			i /= 10;
		}
		_putchar('0' + num);
	}
}
