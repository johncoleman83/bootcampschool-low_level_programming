#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * freemem - frees memory
 * @newstr: new string
 * @words: # of "rows" in 2D array
 * Return: void
 */
void freemem(char **newstr, int words)
{
	int i = 0;

	while (i < words)
	{
		free(newstr[i]);
		i++;
	}
	free(newstr[i]);
	free(newstr);
}
/**
 * strncat_mod - concatenates string with n bytes from another string
 * @dest: destination string
 * @src: source string
 * @i: index of beginning char from source string to copy
 * Return: next index to check of source string
 */
int strncat_mod(char *dest, char *src, int i)
{
	int j;

	for (j = 0; src[i] != ' ' && src[i] != '\0'; i++, j++)
		dest[j] = src[i];
	return (i);
}
/**
 * mallocmem - allocates memory for output array and sets NULL at string end
 * @newstr: new string
 * @str: input string
 * Return: 0 on failure, 1 success
 */
int mallocmem(char **newstr, char *str)
{
	int i = 0, j = 0, word_len = 1;

	while (str[i] != 0)
	{
		if (str[i] != ' ')
		{
			while (str[i] != ' ' && str[i] != '\0')
				i++, word_len++;
			newstr[j] = malloc(sizeof(char *) * word_len);
			if (newstr[j] == 0)
				return (0);
			newstr[j][word_len] = '\0';
			j++, word_len = 0;
		}
		i++;
	}
	return (1);
}
/**
 * strtow - splits a string into words
 * @str: input string to split
 * Return: pointer to new string
 */
char **strtow(char *str)
{
	char **newstr;
	int words = 0, i = 0, j;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	while (str[i] != 0)
	{
		if (str[i] != ' ')
		{
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			words++;
		}
		i++;
	}
	if (words == 0)
		return (NULL);
	words++;
	newstr = malloc((words + 1) * sizeof(char *));
	if (newstr == 0)
		return (NULL);
	if (!mallocmem(newstr, str))
	{
		freemem(newstr, words);
		return (NULL);
	}
	newstr[words + 1] = NULL;
	i = 0, j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			i = strncat_mod(newstr[j], str, i);
			j++, i--;
		}
		i++;
	}
	return (newstr);
}
