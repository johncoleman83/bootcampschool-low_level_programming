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
	while (i <= 122)
	{
		i == 'e' || i == 'q' ? i++ : i;
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
