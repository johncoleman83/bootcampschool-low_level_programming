#include "bootcamp.h"
/**
 * print_binary - prints binary representation of a number
 * @n: input number to be converted to binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int copy = n;
	int index = 0;

	while ((copy >>= 1) > 0)
		index++;
	while (index >= 0)
		_putchar((n >> index--) & 1 ? '1' : '0');
}
