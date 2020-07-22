#include "bootcamp.h"

/**
 * times_table - prints 9x table
 *
 * Return: void
 */
void times_table(void)
{
	int column, row, sum, t;

	column = 0;
	while (column < 10)
	{
		_putchar('0');
		row = 1;
		while (row < 10)
		{
			_putchar(',');
			_putchar(' ');
			sum = column * row, t = sum / 10;
			if (sum < 10)
			{
				_putchar(' ');
				_putchar(sum + '0');
			}
			else
			{
				_putchar(t + '0');
				_putchar(sum % 10 + '0');
			}
			row++;
		}
		_putchar('\n');
		column++;
	}
}
