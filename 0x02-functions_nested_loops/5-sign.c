#include "holberton.h"

/**
 * print_sign - Checks if input number is positive, negative, or zero
 * @n: number to be check
 *
 * Return: returns 1, 0, -1 based on sign of input
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
