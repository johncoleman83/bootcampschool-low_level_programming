#include "holberton.h"
/**
 * print_binary - prints binary representation of a number
 * @n: input number to be converted to binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int copy = 0, one = 1;
	int position = (sizeof(unsigned long int) * 8) - 1;

	while ((copy & one) == 0 && position != 0)
	{
		copy = n;
		copy >>= position--;
	}
	if (position)
		position++;
	while (position >= 0)
	{
		copy = n;
		copy >>= position--;
		putchar((copy & one) + '0');
	}
}
