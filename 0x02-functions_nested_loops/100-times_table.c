#include "holberton.h"

/**
 * print_times_table - prints nx times table
 * @n: value of how large the times table should be
 *
 * Return: void
 */
void print_times_table(int n)
{
	if (n < 16 && n > -1)
	{
		int column, row, sum, h, t, o;

		column = 0;
		while (column <= n)
		{
			row = 0;
			while (row <= n)
			{
				sum = column * row;
				h = sum / 100, t = sum / 10 % 10, o = sum % 10;
				if (row == 0)
				{
					_putchar(sum + '0');
				}
				else if (sum > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(h + '0');
					_putchar(t + '0');
					_putchar(o + '0');
				}
				else if (sum < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(o + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(t + '0');
					_putchar(o + '0');
				}
				row++;
			}
			_putchar('\n');
			column++;
		}
	}
}
