#include <stdlib.h>
#include <stdio.h>

/**
 * main - print fibonacci numbers up to 98 numbers total
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	unsigned long x, y, z;

	x = 1, y = 2;
	while (i < 99)
	{
		printf("%lu", x);
		if (i < 98)
		{
			printf(", ");
		}
		z = y;
		y = x + y;
		x = z;
		i++;
	}
	putchar('\n');
	return (0);
}
