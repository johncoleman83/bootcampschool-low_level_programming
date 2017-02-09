#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char j;

	i = 0;
	j = 'a';

	while (i < 10)
	{
		putchar(i % 10 + '0');
		i++;
	}
	while (j < 103)
	{
	    putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
