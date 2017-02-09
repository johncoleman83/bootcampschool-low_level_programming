#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	i = 'a';
	while (i != 91)
	{
		if (i == 123)
		{
			i = 65;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
