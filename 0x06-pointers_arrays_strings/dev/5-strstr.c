#include "holberton.h"
/**
 * _strstr - returns pointer to first char of matching substring
 * @haystack: string to find substring in
 * @needle: substring to find match of
 * Return: pointer to first char of matching substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *i;
	char *j;

	while (haystack != '\0')
	{
		i = haystack;
		j = needle;
		while (*haystack == *j && *haystack != '\0' && *j != '\0')
			haystack++, j++;
		if (*j == '\0')
			return (i);
		haystack = i + 1;
	}
	return ('\0');
}
