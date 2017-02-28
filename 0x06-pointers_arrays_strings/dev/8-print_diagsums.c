#include "holberton.h"
/**
 * print_diagsums - input
 * @s: arg
 * @size: arg
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');

	}
}
