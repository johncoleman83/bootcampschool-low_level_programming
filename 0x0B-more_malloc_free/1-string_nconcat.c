#include "holberton.h"
/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from second string
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *str_conct;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + len1) != '\0')
		len1++;
	while (*(s2 + len2) != '\0')
		len2++;

	if (len1 == 0 && len2 == 0)
		return (NULL);
	str_conct = malloc(sizeof(char) * (len1 + (len2 < n ? len2 : n) + 1));
	for (i = 0; i < len1; i++)
		str_conct[i] = s1[i];
	for (j = 0; j < n && j < len2; i++, j++)
		str_conct[i] = s2[j];
	str_conct[i] = '\0';
	return (str_conct);
}
