#include "bootcamp.h"

/**
 * print_most_numbers - prints digits 0 - 9, skipping 2 & 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char i;

	for (i = 48; i < 58; i++)
	{
		i == '2' || i == '4' ? _putchar(++i) : _putchar(i);
	}
	_putchar('\n');
}
