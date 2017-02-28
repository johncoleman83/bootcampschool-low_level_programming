#include "holberton.h"
/**
 * print_diagsums - input
 * @s: arg
 * @size: arg
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int j = 1;

	while (a[0][j - 1] != 0)
	{
		_putchar(a[0][j - 1]);
		if (j > 1 && j % 8 == 0)
			_putchar('\n');
		j++;
	}
}
