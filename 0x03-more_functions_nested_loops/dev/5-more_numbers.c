#include "holberton.h"

/**
 * more_numbers - prints digits 0 - 14, 10x
 *
 * Return: void
 */
void more_numbers(void)
{
	char i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar('1');
			_putchar(j % 10 + 48);
		}
		_putchar('\n');
	}
}
