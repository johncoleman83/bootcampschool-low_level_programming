#include <stdlib.h>
#include <stdio.h>

/**
 * main - print fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long x, y, z;
	unsigned long sum = 0;

	x = 1, y = 2;
	while (x <= 4000000)
	{
		if (x % 2 == 0)
		{
			sum += x;
		}
		z = y;
		y = x + y;
		x = z;
	}
	printf("%lu\n", sum);
	return (0);
}
