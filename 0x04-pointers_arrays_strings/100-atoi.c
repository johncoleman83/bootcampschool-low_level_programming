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
	int result = 0, nth = 1, c = 0, digits = 0, start = 0, sign = 0;

	while (s[c] != 0)
	{
		if (s[c] == '-' || s[c] == '+')
			s[c] == '+' ? sign++ : sign--;
		if (s[c] > 47 && s[c] < 58)
		{
			start += c;
			while (s[c] > 47 && s[c] < 58 && s[c] != 0)
				digits++, c++;
			break;
		}
		c++;
	}
	if (digits > 0)
	{
		c--;
		for (digits -= 1; digits > 0; digits--)
			nth *= 10;
		while (start <= c)
		{
			if (sign >= 0)
				result += (s[start] - 48) * nth;
			else
				result -= (s[start] - 48) * nth;
			nth /= 10;
			start++;
		}
	return (result);
	}
	else
		return (0);
}
