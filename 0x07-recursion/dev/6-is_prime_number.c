#include "holberton.h"
/**
 * is_prime - helper to check if number is prime
 * @a: number to check
 * @b: divisor
 * Return: truth statement - boolean
 */
int is_prime(int a, int b)
{
	if (a < 2)
		return (0);
	if (a == b)
		return (1);
	if (b * b > a)
		return (1);
	return (a % b == 0 ? 0 : (is_prime(a, b + 1)));
}
/**
 * is_prime_number - checks if # is prime
 * @n: number to check
 * Return: boolean
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
