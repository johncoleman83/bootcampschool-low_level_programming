#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - creates an array of chars, and initializes it w/ a char
 * @size: input size of array
 * @c: initializing char
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *pstr;
	unsigned int i;

	pstr = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		pstr[i] = c;
	pstr[i] = 0;
	return (size < 1 ? 0 : pstr);
}
