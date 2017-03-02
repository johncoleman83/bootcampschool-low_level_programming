#include "holberton.h"
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
 * check_equality - finds address of first non equal characters
 * @s1: input string one
 * @s2: input string two
 * Return: void
 */
int check_equality(char *s1, char *s2)
{
	int star = 0;
	char post_l;
	char *an_address = s1, *post_i1, *post_i2;

	an_address = move_pointer(an_address, '\0', 1);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (check_equality(++s1, ++s2));
	if (*s2 == '*')
	{
		s2 = parse_star(s2);
		if (*s2 == '\0')
			return (1);
		post_l = *s2, post_i1 = s1, post_i2 = s2;
		s1 = move_pointer(s1, post_l, 1);
		if (*s1 == '\0')
			return (0);
		star = 1;
	}
	if (*s1 != *s2)
	{
		if (star == 0)
			return (0);
		star = 0;
		an_address = move_pointer(an_address, post_l, -1);
		if (post_i1 == an_address)
			return (0);
		s1 = an_address;
		s2 = post_i2;
	}
	return (check_equality(++s1, ++s2));
}
/**
 * wildcmp - checks is strings could be identical considering * wildcard
 * @s1: first string
 * @s2: second string
 * Return: boolean
 */
int wildcmp(char *s1, char *s2)
{
	return (check_equality(s1, s2));
}
