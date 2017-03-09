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
 * @str_len: string length
 * Return: next index to check of source string
 */
int strncat_mod(char *dest, char *src, int i, int str_len)
{
	int j;

	for (j = 0; src[i] != ' ' && i < str_len; i++, j++)
		dest[j] = src[i];
	return (i);
}
/**
 * mallocmem - allocates memory for output array and sets NULL at string end
 * @newstr: new string
 * @str: input string
 * @str_len: string length
 * Return: 0 on failure, 1 success
 */
int mallocmem(char **newstr, char *str, int str_len)
{
	int i = 0, j = 0, word_len = 1;

	while (i < str_len)
	{
		if (str[i] != ' ')
		{
			while (str[i] != ' ' && i < str_len)
				i++, word_len++;
			newstr[j] = malloc(sizeof(char) * word_len);
			if (newstr[j] == 0)
				return (0);
			newstr[j][word_len] = '\0';
			j++, word_len = 1;
		}
		i++;
	}
	return (1);
}
/**
 * word_count - counts words in input string
 * @str: input string
 * @str_len: string length
 * Return: 0 on failure, words on success
 */
int word_count(char *str, int str_len)
{
	int i = 0, words = 0;

	while (i < str_len)
	{
		if (str[i] != ' ')
		{
			while (str[i] != ' ' && i < str_len)
				i++;
			words++;
		}
		i++;
	}
	if (words == 0)
		return (0);
	return (words);
}
/**
 * strtow - splits a string into words
 * @str: input string to split
 * Return: pointer to new string
 */
char **strtow(char *str)
{
	char **newstr;
	int i = 0, j = 0, str_len = 0, words;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	while (*(str + str_len) != '\0')
		str_len++;
	words = word_count(str, str_len);
	if (!words)
		return (NULL);
	newstr = malloc((words + 1) * sizeof(char *));
	if (!newstr)
		return (NULL);
	if (!mallocmem(newstr, str, str_len))
	{
		freemem(newstr, words);
		return (NULL);
	}
	while (i < str_len)
	{
		if (str[i] != ' ')
		{
			i = strncat_mod(newstr[j], str, i, str_len);
			j++, i--;
		}
		i++;
	}
	newstr[words + 1] = NULL;
	return (newstr);
}
