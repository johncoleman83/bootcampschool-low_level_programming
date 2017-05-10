#include "holberton.h"
/**
 * _isdigit - checks if input's ascii value is digit 0-9
 * @c: input variable to check ascii value
 * Return: 1 if digit, 0 if not
 */
int _isdigit(int c)
{
	return (c > 47 && c < 58 ? 1 : 0);
}
