#include "holberton.h"
/**
 * _strstr - returns pointer to first char of matching substring
 * @haystack: string to find substring in
 * @needle: substring to find match of
 * Return: pointer to first char of matching substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, start;
	for (i = 0; haystack[i] != '\0'; i++)
		if (haystack[i] == needle[0])
		{
			start = i, j = 0;
			while (haystack[start] != '\0' && needle[j] != '\0'
				   && haystack[start] == needle[j])
				start++, j++;
			if (needle[j] == '\0')
				return (haystack + i);
		}
	return ('\0');
}
