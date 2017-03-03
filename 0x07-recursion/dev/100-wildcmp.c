#include "holberton.h"
/**
 * move_p - move pointer to 'c' character in 'd' direction
 * @s1: check point to stop in rare circumstances
 * @s2: input string
 * @c: character to match or with '*' to find first non-'*'
 * @d: direction forward or backwards: 1 or -1
 * Return: pointer to match
 */
char *move_p(char *s1, char *s2, char c, int d)
{
	if (c == '*')
	{
		if (*s2 != '*')
			return (s2);
		return (move_p(s1, s2 + 1, c, d));
	}
	if (s2 == s1)
		return (s2);
	if (*s2 == c)
		return (s2);
	return (move_p(s1, (d == 1 ? s2 + 1 : s2 - 1), c, (d == 1 ? 1 : -1)));
}
/**
 * wildcmp - checks is strings could be identical considering * wildcard
 * @s1: first string
 * @s2: second string
 * Return: boolean
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		s2 = move_p(s1, s2, '*', 1);
		if (*s2 == '\0')
			return (1);
		if (*s1 == '\0')
			return (0);
		if (wildcmp(move_p(s1, move_p(s2, s1, '\0', 1), *s2, -1), s2))
			return (1);
	}
	if (*s1 != *s2)
		return (0);
	return (wildcmp(s1 + 1, s2 + 1));
}
