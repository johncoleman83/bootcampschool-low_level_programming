#include "holberton.h"
/**
 * flip_bits - finds # of bits that need to be flipped to make new number
 * @n: number one to be flipped
 * @m: number two to be flipped to
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int new_num = n ^ m;
	int index = (sizeof(unsigned long int) * 8) - 1;
	int bits_flipped = 0;

	while (index >= 0)
	{
		if ((new_num >> index) & 1)
			bits_flipped++;
		index--;
	}
	return (bits_flipped);
}
