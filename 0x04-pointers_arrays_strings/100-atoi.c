#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - returns integer values from string
 * @s: input string
 *
 * Return: will return integer
 */
int _atoi(char *s)
{
	int result = 0, c = 0, sign = -1;

	while (s[c] != '\0')
	{
		if (s[c] == '-')
			sign *= -1;
		if (s[c] > 47 && s[c] < 58)
		{
			while (s[c] > 47 && s[c] < 58)
				result = result * 10 - (s[c++] - 48);
			break;
		}
		c++;
	}
	return (result * sign);
}
