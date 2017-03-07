#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - copies input string in newly allocated memory
 * @str: input string
 * Return: pointer to duplicate string or NULL if failure
 */
char *_strdup(char *str)
{
	char *pstr;
	unsigned int i = 0;

	while (str[i] != 0)
		i++;
	pstr = malloc(sizeof(char) * i);
	for (i = 0; str[i] != 0; i++)
		pstr[i] = str[i];
	pstr[i] = 0;
	return (i == 0 ? 0 : pstr);
}
