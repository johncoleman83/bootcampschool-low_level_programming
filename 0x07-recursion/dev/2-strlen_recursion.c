#include "bootcamp.h"
/**
 * _strlen_recursion - returns stringlength
 * @s: input string
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(++s) + 1);
}
