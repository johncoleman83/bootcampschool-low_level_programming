#include "holberton.h"
/**
 * _strstr - returns pointer to first char of matching substring
 * @haystack: string to find substring in
 * @needle: substring to find match of
 * Return: pointer to first char of matching substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, n_len = 0, start;

	while (needle[n_len] != '\0')
		n_len++;
	for (i = 0; haystack[i] != '\0'; i++)
		if (haystack[i] == needle[0])
			for (j = 0, start = i; needle[j] != '\0'; j++, start++)
				if (haystack[start] != needle[j])
					break;
				else if (j == n_len - 1)
					goto exit;
exit: return (haystack + i);
}
