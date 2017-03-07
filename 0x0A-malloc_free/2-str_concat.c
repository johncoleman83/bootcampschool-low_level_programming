#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - concatenates two strings
 * @s1: input string 1
 * @s2: input string 2
 * Return: pointer to newly allocated space in memory with both strings or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *pstr;
	unsigned int i = 0, j = 0, k = 0, len;

	if (s1 == 0 || s2 == 0)
		return (0);
	while (s1[i] != 0)
		i++;
	while (s2[j] != 0)
		j++;
	len = j + i + 1;
	pstr = malloc(sizeof(char) * len);
	for (i = 0; s1[i] != 0; i++)
		pstr[i] = s1[i];
	for (j = i, i = 0; s2[k] != 0; j++, k++)
		pstr[j] = s2[k];
	pstr[j] = 0;
	return (pstr);
}
