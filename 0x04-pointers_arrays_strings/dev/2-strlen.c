#include "holberton.h"
/**
 * _strlen - returns string length of input string
 * @s: string to check length of
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
		i++;
	return (i);
}
