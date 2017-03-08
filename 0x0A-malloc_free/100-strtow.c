#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * strtow - splits a string into words
 * @str: input string to split
 * Return: pointer to new string
 */
char **strtow(char *str)
{
	char **newstr;
	int words = 0, i = 0, j = 0, word_len = 1;

	if (str == 0)
		return (NULL);
	while (str[i] != 0)
	{
		if (str[i] == ' ' && i != 0)
			words++;
		i++;
	}
	if (i > 0 && str[i] != ' ')
		words++;
	else
		return (NULL);
	newstr = malloc((words + 1) * sizeof(char *));
	if (newstr == 0)
	{
		free(newstr);
		return (NULL);
	}
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == ' ')
		{
			newstr[j] = malloc(sizeof(char *) * word_len);
			if (newstr[j] == 0)
				return (NULL);
			j++, word_len = 0;
		}
		word_len++, i++;
	}
	newstr[j] = malloc(sizeof(char) * (word_len));
	if (newstr[j] == 0)
		return (NULL);
	i = 0, word_len = 0, j = 0;
	while (str[i] != 0)
	{
		if (str[i] == ' ')
		{
			newstr[j][word_len] = 0;
			j++, word_len = -1;
		}
		else
			newstr[j][word_len] = str[i];
		word_len++, i++;
	}
	newstr[j][word_len] = 0;
	newstr[++j] = NULL;
	return (newstr);
}
