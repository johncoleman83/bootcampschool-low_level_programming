#include "holberton.h"
/**
 * print_binary - prints binary representation of a number
 * @n: input number to be converted to binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int copy, one = 1, nth_bit = 0;
	int position = (sizeof(unsigned long int) * 8) - 1;

	while (nth_bit == 0 && position != 0)
	{
		copy = n;
		copy >>= position;
		nth_bit = copy & one;
		position--;
	}
	if (position)
		position++;
	while (position >= 0)
	{
		copy = n;
		copy >>= position--;
		nth_bit = copy & one;
		putchar(nth_bit + '0');
	}
}
