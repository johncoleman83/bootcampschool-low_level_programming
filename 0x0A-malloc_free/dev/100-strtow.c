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
	int words = 0, i = 0, j = 0, word_len = 1, spaces = 0;
	printf("here\n");
	if (str == 0)
		return (NULL);
	while (str[i] != 0)
	{
		if (str[i] == ' ')
			spaces++;
		if (str[i] == ' ' && str[i + 1] != 0)
			words++;
		i++;
	}
	printf("here2 i= %d, words= %d\n", i, words);
	if (i < 1)
		return (NULL);
	words++;
	newstr = malloc((words + 1) * sizeof(char *));
	if (newstr == 0)
		return (NULL);
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == ' ' && i != 0)
		{
			newstr[j] = malloc(sizeof(char *) * word_len);
			if (newstr[j] == 0)
				return (NULL);
			j++, word_len = 0;
		}
		if (str[i] == ' ' && i == 0)
			word_len--;
		word_len++, i++;
	}
	printf("now here 3\n");
	if (str[i - 1] != ' ')
	{
		newstr[j] = malloc(sizeof(char) * (word_len));
		if (newstr[j] == 0)
			return (NULL);
	}
	printf("here 4\n");
	i = 0, word_len = 0, j = 0;
	while (str[i] != 0)
	{
		if (str[i] == ' ' && i != 0)
		{
			newstr[j][word_len] = 0;
			j++, word_len = -1;
		}
		else
			if (str[i] != ' ')
				newstr[j][word_len] = str[i];
		if (str[i] == ' ' && i == 0)
			word_len--;
		word_len++, i++;
	}
	if (str[i - 1] == ' ')
		word_len--;
	newstr[j][word_len] = 0;
	newstr[j++] = NULL;
	return (newstr);
}