#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 0;

	while (i < 103)
	{
		if (i == 10)
		{
			i = 97;
		}
		if (i >= 97)
		{
			putchar(i);
		}
		else
		{
		putchar(i % 10 + '0');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
