#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	i = 0;

	while (i < 90)
	{
		if (i > 0 && i % 10 == 0)
		{
			j = i / 10;
			i = i + j + 1;
		}
		putchar(i / 10 % 10 + '0');
		putchar(i % 10 + '0');
		if (i < 99)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
