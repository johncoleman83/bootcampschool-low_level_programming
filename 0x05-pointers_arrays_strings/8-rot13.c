#include "holberton.h"
/**
 * rot13 - translates string to ROT13
 * @s: input string to be translated
 *
 * Return: string after conversion of ROT13
 */
char *rot13(char *s)
{
	int i, j;
	char alphabet[] = "abcdefghijklmABCDEFGHIJKLM";
	char rot_it[] =   "nopqrstuvwxyzNOPQRSTUVWXYZ";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (s[i] == alphabet[j])
				s[i] = rot_it[j];
			else if (s[i] == rot_it[j])
				s[i] = alphabet[j];
		}
	}
	return (s);
}
