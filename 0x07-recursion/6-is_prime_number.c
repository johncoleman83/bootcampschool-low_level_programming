#include "holberton.h"
/**
 * is_prime_number - input
 * @n: number to check
 * @y: divisor
 * Return: void
 */
int is_prime(int a, int b)
{
	if (a < 2)
		return (0);
	if (a == b)
		return (1);
	return (a % b == 0 ? 0 : (is_prime(a, b + 1)));
}

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
