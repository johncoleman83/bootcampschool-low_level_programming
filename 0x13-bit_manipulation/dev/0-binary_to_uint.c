#include "bootcamp.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary string
 * Return: decimal # or 0 if fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, decimal = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		decimal <<= 1;
		if (b[i] == '1')
			decimal ^= 1;
		i++;
	}
	return (decimal);
}
