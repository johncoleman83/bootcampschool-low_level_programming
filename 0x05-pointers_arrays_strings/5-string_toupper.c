#include "bootcamp.h"
/**
 * string_toupper - converts string lowercase letters to uppercase
 * @s: input string to be converted
 *
 * Return: string after conversion to upper
 */
char *string_toupper(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
		if (s[j] > 96 && s[j] < 123)
			s[j] -= 32;
	return (s);
}
