#include "holberton.h"

/**
 * times_table - prints 9x table
 *
 * Return: void
 */
void times_table(void)
{
	int column, row;
	int sum;

	column = 0;
	while (column < 10)
	{
		row = 0;
		while (row < 10)
		{
			sum = column * row;
			if (row == 0)
			{
				_putchar(sum + '0');
			}
			else if (sum < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(sum + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(sum / 10 + '0');
				_putchar(sum % 10 + '0');
			}
			row++;
		}
		_putchar('\n');
		column++;
	}
}
