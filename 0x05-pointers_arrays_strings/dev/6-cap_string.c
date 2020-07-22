#include "bootcamp.h"
/**
 * cap_string - converts string words to be capitalized
 * @s: input string to have all words capitalized
 *
 * Return: string after conversion to Capitalize words
 */
char *cap_string(char *s)
{
	int i;

	if (s[0] > 96 && s[0] < 123)
		s[0] -= 32;
	for (i = 0; s[i] != '\0'; i++)
	{
		switch (s[i])
		{
		case ' ': case '\n': case '\t': case ',':
		case ';': case '.': case '!': case '?': case '"':
		case '(': case ')': case '{': case '}':
			if (s[i + 1] > 96 && s[i + 1] < 123)
				s[i + 1] -= 32;
		}
	}
	return (s);
}
