#include "holberton.h"
#include <stdio.h>
/**
 * move_pointer - move pointer to character in 'd' direction
 * @s: input string
 * @c: character to match
 * @d: direction, forward 1, reverse -1
 * Return: pointer to match
 */
char *move_pointer(char *s, char c, int d)
{
	if (d == 1 && *s == '\0')
		return (s);
	if (*s == c)
		return (s);
	return (d == 1 ? move_pointer(++s, c, d) : move_pointer(--s, c, d));
}
/**
 * parse_star - parses string until match is not found
 * @s: input string
 * Return: pointer to index of first non match
 */
char *parse_star(char *s)
{
	if (*s != '*')
		return (s);
	return (parse_star(++s));
}
/**
 * wildcmp - checks is strings could be identical considering * wildcard
 * @s1: first string
 * @s2: second string
 * Return: boolean
 */
int wildcmp(char *s1, char *s2)
{
	char post_l;
	char *an_address = s1;

	an_address = move_pointer(an_address, '\0', 1);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		s2 = parse_star(s2);
		if (*s2 == '\0')
			return (1);
		if (*s1 == '\0')
			return (0);
		post_l = *s2;
		an_address = move_pointer(an_address, post_l, -1);
		if (wildcmp(an_address, s2) == 1)
			return (1);
	}
	if (*s1 != *s2)
		return (0);
	return (wildcmp(++s1, ++s2));
}
