#include "bootcamp.h"
/**
 * _islower - Checks if input character is lowercase
 * @c: letter to be checked
 * Return: 1 for lowercase, 0 for non-lowercase
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}
