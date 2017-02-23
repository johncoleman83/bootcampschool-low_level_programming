#include "holberton.h"
/**
 * reverse_array - reverses array of integers
 * @a: input array
 * @n: length of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int j, temp;

	for (n--, j = 0; j <= n / 2; j++, n--)
		temp = a[j], a[j] = a[n], a[n] = temp;
}
