#include "holberton.h"
/**
 * address_of_end - returns pointer to null terminator
 * @s: input string
 * Return: pointer to Null terminator char of string
 */
char *address_of_end(char *s)
{
	if (*s == '\0')
		return (s);
	return (address_of_end(++s));
}
/**
 * regress - regresses from end of string to last matching char
 * @s: input string
 * @c: character to match
 * Return: index of match
 */
char *regress(char *s, char c)
{
	if (*s == c)
		return (s);
	return (regress(s - 1, c));
}
/**
 * last_star - regresses from end of string to last matching char
 * @s: input string
 * Return: index of match
 */
char *last_star(char *s)
{
	if (*s != '\0')
		return (s);
	return (last_star(s + 1));
}
/**
 * check_equality - finds address of first non equal characters
 * @s1: input string one
 * @s2: input string two
 * Return: void
 */
int check_equality(char *s1, char *s2)
{
	int found_star = 0;
	char post_l;
	char *len1, *post_i1, *post_i2;

	len1 = address_of_end(s1);
	while (*s1 != '\0' && *s2 != '\0')
	{
		while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
				s1++, s2++;
			if (*s2 == '*')
			{
				while (*s2 == '*')
					s2++;
				if (*s2 == '\0')
					return (1);
				post_l = *s2;
				post_i1 = s1;
				post_i2 = s2;
				while (*s1 != *s2 && *s1 != '\0')
					s1++;
				if (*s1 == '\0')
					return (0);
				found_star = 1;
			}
			if (*s1 != *s2)
			{
				if (found_star == 0)
					return (0);
				found_star = 0;
				len1 = regress(len1, post_l);
				if (post_i1 == len1)
					return (0);
				s1 = len1;
				s2 = post_i2;
			}
	}
	return (1);
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
