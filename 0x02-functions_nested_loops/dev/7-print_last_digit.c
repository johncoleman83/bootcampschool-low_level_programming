#include "holberton.h"

/**
 * print_last_digit - print last digit of a number
 * @n: number to be checked
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
	{
		i = 0 - i;
	}
	_putchar(i + '0');
	return (i);
}
