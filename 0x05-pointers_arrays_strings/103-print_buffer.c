#include "holberton.h"
#include <stdio.h>
/**
 * print_buffer - prints string and buffer sizes
 * @b: input pointer
 * @size: size of input buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i = 0, j = 0, count = 0;

	while (j < size)
	{
		printf("000000%02x ", j);
		count = 0;
			while (count < 10)
			{
				if (i >= size)
					printf("     ");
				else
					printf("%02x%02x ", *(b + i), *(b + i + 1));
				i += 2;
				count += 2;
			}
			i -= 10;
			count = 0;
			while (count < 10 && i < size)
			{
				printf("%c", *(b + i) > 31 && *(b + i) < 127 ? *(b + i) : '.');
				count++;
				i++;
			}
		printf("\n");
		j += 10;
	}
}
