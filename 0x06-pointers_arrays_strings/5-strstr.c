#include "holberton.h"
/**
 * _strstr - returns pointer to first char of matching substring
 * @haystack: string to find substring in
 * @needle: substring to find match of
 * Return: pointer to first char of matching substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *i, *j;

	while (haystack != '\0')
	{
		i = haystack;
		j = needle;
		while (*i == *j && *i != '\0' && *j != '\0')
			i++, j++;
		if (*j == '\0')
			return (haystack);
		haystack++;
	}
	return ('\0');
}
