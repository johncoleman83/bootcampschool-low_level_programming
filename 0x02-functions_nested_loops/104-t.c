#include <stdio.h>

/**
 * fib_93 - prints the first 93 numbers in the fibbunacco sequemce
 *@a: first sequential fibunocci number
 *@b: second sequential fibonacci number
 *
 * Return: none
 */

void fib_93(unsigned long a, unsigned long b)
{
	unsigned long x1, x2, y1, y2, z1, z2;
	int i;

	x1 = a / 100; x2 = a % 100;
	y1 = b / 100; y2 = b % 100;

	for (i = 1; i <= 6; i++)
	{
		z1 = x1 + y1; z2 = x2 + y2;
		if (z2 >= 100)
		{
			z2 = z2 % 100;
			z1 = z1 + 1;
			if (z2 < 10)
			{
				printf("%lu0%lu", z1, z2);
			}
			else
			{
				printf("%lu%lu", z1, z2);
			}
		}
		else
		{
			printf("%lu%lu", z1, z2);
		}

		if (i != 6)
			printf(", ");

		x1 = y1; y1 = z1;
		x2 = y2; y2 = z2;
	}
	putchar('\n');
}



/**
 * main - entry point
 *
 * Return: always return (0)
 */

int main(void)
{
	int i;
	unsigned long a, b, c;

	a = 1;
	b = c = 2;

	for (i = 2; i <= 90; i += 2)
	{
		printf("%lu, %lu, ", a, b);
		a = a + b;
		b = a + b;
	}
	printf("%lu, %lu, ", a, b);
	  fib_93(a, b);
	  putchar('\n');

	return (0);
}
