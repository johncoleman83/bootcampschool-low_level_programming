#include "holberton.h"
/**
 * move_pointer - move pointer to character in 'd' direction
 * @s: input string
 * @c: character to match
 * Return: pointer to match
 */
char *move_pointer(char *s, char c)
{
	if (*s == c)
		return (s);
	return (move_pointer(++s, c));
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
 * regress - regresses from end of string to last matching char
 * @s1: stopping point
 * @s2: input string
 * @c: character to match
 * Return: index of match
 */
char *regress(char *s1, char *s2, char c)
{
	if (s2 == s1)
		return (s2);
	if (*s2 == c)
		return (s2);
	return (regress(s1, s2 - 1, c));
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

	an_address = move_pointer(an_address, '\0');
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
		an_address = regress(s1, an_address, post_l);
		if (wildcmp(an_address, s2) == 1)
			return (1);
	}
	if (*s1 != *s2)
		return (0);
	return (wildcmp(++s1, ++s2));
}
