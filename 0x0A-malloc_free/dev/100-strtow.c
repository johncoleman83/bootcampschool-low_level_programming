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
 * mallocmem - allocates memory for me
 * @newstr: new string
 * @str: input string
 * @words: # of "rows" in 2D array
 * Return: 0 on failure, 1 success
 */
int mallocmem(char **newstr, char *str, int words)
{
	int i = 0, j = 0, word_len = 1;

	while (str[i] != 0)
	{
		if (str[i] == ' ' && i != 0)
		{
			newstr[j] = malloc(sizeof(char *) * word_len);
			if (newstr[j] == 0)
			{
				freemem(newstr, words);
				return (0);
			}
			j++, word_len = 0;
		}
		if (str[i] == ' ' && i == 0)
			word_len--;
		word_len++, i++;
	}
	if (str[i - 1] != ' ')
	{
		newstr[j] = malloc(sizeof(char) * (word_len));
		if (newstr[j] == 0)
		{
			freemem(newstr, words);
			return (0);
		}
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
	int words = 0, i = 0, j, let;

	if (str == 0)
		return (NULL);
	while (str[i] != 0)
	{
		if (str[i] == ' ' && str[i + 1] != 0)
			words++;
		i++;
	}
	if (i < 2)
		return (NULL);
	words++;
	newstr = malloc((words + 1) * sizeof(char *));
	if (newstr == 0)
		return (NULL);
	i = 0;
	if (!mallocmem(newstr, str, words))
		return (NULL);
	i = 0, let = 0, j = 0;
	while (str[i] != 0)
	{
		if (str[i] == ' ' && i != 0)
		{
			newstr[j][let] = 0;
			if (str[i + 1] != 0)
				j++, let = -1;
		}
		else
			newstr[j][let] = str[i];
		if (str[i] == ' ' && i == 0)
			let--;
		let++, i++;
	}
	if (str[i - 1] != ' ')
		newstr[j][let] = 0;
	newstr[++j] = NULL;
	return (newstr);
}
