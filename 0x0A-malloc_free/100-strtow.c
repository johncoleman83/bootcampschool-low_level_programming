#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * strtow - splits a string into words
 * @str: input string to splie
 * Return: pointer to new string
 */
char **strtow(char *str)
{
	char **newstr;
	int words = 0, i = 0, j = 0, word_len;

	if (str == 0)
		return (0);
	while (str[i] != 0)
	{
		if (str[i] == ' ')
		{
			while (str[i] == ' ')
				i++;
			words++;
		}
	}
	if (i > 0)
		words++;
	newstr = malloc(words * sizeof(*newstr));
	if (newstr == 0)
	{
		free(newstr);
		return (0);
	}
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == ' ')
		{
			newstr[j] = malloc(sizeof(char) * word_len);
			if (newstr[j] == 0)
				return (0);
			while (str[i] == ' ')
				i++;
			j++, word_len = 0;
		}
		word_len++, i++;
	}
	newstr[j] = malloc(sizeof(char) * word_len);
	if (newstr[j] == 0)
		return (0);
	i = 0, word_len = 0;
	while (str[i] != 0)
	{
		if (str[i] == ' ')
		{
			newstr[j][word_len] = 0;
			while (str[i] == ' ')
				i++;
			j++, word_len = 0;
		}
		else
			newstr[j][word_len] = str[i];
		word_len++, i++;
	}
	return (newstr);
}
