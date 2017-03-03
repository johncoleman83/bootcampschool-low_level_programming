#include <stdio.h>
/**
  * wildcmp - compares two strings, returns 1 if identical
  * @s1: takes in first string
  * @s2: takes in 2nd string
  * Return: 0
  */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
	}
	return (0);
}
