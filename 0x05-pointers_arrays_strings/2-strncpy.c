#include "holberton.h"
/**
 * _strncpy - copies string from source to destination
 * @dest: destination string
 * @src: source string to be copied
 * @n: bytes to be copied from source string
 *
 * Return: destination string concatenated
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j, i = 0;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && dest[j] != '\0' && src[j] != '\0'; j++)
		dest[j] = src[j];
	if (j < n)
		for (i = 0; j <= i; j++)
			dest[i] = '\0';
	return (dest);
}
