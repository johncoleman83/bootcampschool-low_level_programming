#include "bootcamp.h"
/**
 * check_divisor - find square root
 * @a: main number
 * @b: divisor to check if its a square root
 * Return: natural square root or -1
 */
int check_divisor(int a, int b)
{
	if (b * b == a)
		return (b);
	if (b * b > a)
		return (-1);
	return (check_divisor(a, b + 1));
}
/**
 * _sqrt_recursion - input
 * @n: number to check for natural square root
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n > 1 && n < 4)
		return (-1);
	return (check_divisor(n, 1));
}
