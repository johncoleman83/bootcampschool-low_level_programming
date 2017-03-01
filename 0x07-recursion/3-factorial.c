#include "holberton.h"
/**
 * factorial - returns factorial of a number
 * @n: input number
 * Return: void
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);
	return (n * factorial(n - 1));
}
