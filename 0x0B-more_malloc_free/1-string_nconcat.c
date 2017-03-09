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
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + len1) != '\0')
		len1++;
	while (*(s2 + len2) != '\0')
		len2++;
	if (len1 == 0 && (len2 == 0 || n == 0))
		return (NULL);
	if (n >= len2)
		n = len2;
	new_str = malloc(len1 + n + 1);
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];
	for (j = 0; j < n; i++, j++)
		new_str[i] = s2[j];
	new_str[i] = '\0';
	return (new_str);
}
