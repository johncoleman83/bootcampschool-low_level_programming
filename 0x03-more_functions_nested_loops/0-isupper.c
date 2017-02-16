#include "holberton.h"

/**
 * _isupper - checks if input integer's ascii value is uppercase
 * @c: input number to check if it's ascii value is uppercase
 *
 * Return: 1 if upper, 0 if not
 */
int _isupper(int c)
{
	return (c > 64 && c < 91 ? 1 : 0);
}
