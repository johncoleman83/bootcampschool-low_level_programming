#include "holberton.h"
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
/**
 * regess - regresses from end of string to last matching char
 * @s: input string
 * @i: index
 * @c: character to match
 * Return: index of match
 */
int regress(char *s, int i, char c)
{
	if (s[i] == c)
		return (i);
	return (regress(s, --i, c));
}
/**
 * wildcmp - checks is strings could be identical considering * wildcard
 * @s1: first string
 * @s2: second string
 * Return: boolean
 */
int wildcmp(char *s1, char *s2)
{
	int i1 = 0, i2 = 0, len1 = 0, post_i2, post_i1, found_star = 0;
	char post_l;

	len1 = _strlen_recursion(s1);

	while (s1[i1] != '\0' && s2[i2] != '\0')
	{
		while (s1[i1] == s2[i2] && s1[i1] != '\0' && s2[i2] != '\0')
			{
				i1++, i2++;
			}
			if (s2[i2] == '*')
			{
				while (s2[i2] == '*')
					i2++;
				if (s2[i2] == '\0')
					return (1);
				post_l = s2[i2];
				post_i2 = i2;
				post_i1 = i1;
				while (s1[i1] != s2[i2] && s1[i1] != '\0')
					i1++;
				if (s1[i1] == '\0')
					return (0);
				found_star = 1;
			}
			if (s1[i1] != s2[i2])
			{
				if (found_star == 0)
					return (0);
				found_star = 0;
				len1 = regress(s1, len1, post_l);
				if (post_i1 == len1)
					return (0);
				i1 = len1;
				i2 = post_i2;
			}
	}
	return (1);
}
