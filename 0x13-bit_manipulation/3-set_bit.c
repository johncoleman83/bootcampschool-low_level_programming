#include "holberton.h"
/**
 * set_bit - sets value of bit to 1 at given index
 * @n: pointer to unsigned int
 * @index: index value to be converted to 1
 * Return: 1 on success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int changenum = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	changenum <<= index;
	*n = *n | changenum;
	return (1);
}
