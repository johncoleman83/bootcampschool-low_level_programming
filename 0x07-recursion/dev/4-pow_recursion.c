#include "holberton.h"
/**
 * _pow_recursion - finds x to the power of y
 * @x: base
 * @y: exponent
 * Return: result of x to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (x >= 0 ? 1 : -1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1) * (x < 0 ? -1 : 1));
}
