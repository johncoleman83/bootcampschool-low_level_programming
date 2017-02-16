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
	unsigned long n1, n2, quotient1, quotient2, rem1, rem2;

	n1 = 1, n2 = 2;
	while (i < 90)
	{
		printf("%lu, %lu, ", n1, n2);
		n1 += n2, n2 += n1, i += 2;
	}
	printf("%lu, %lu, ", n1, n2);
	quotient1 = n1 / 100, quotient2 = n2 / 100;
	rem1 = n1 % 100, rem2 = n2 % 100;
	while (i < 96)
	{
		n1 = quotient1 + quotient2, n2 = rem1 + rem2;
		n2 > 99 ? n1++ : n2;
		n2 = n2 % 100;
		printf("%lu", n1);
		printf(n2 < 10 ? "0" : "");
		printf("%lu", n2);
		printf(i < 95 ? ", " : "\n");
		quotient1 = quotient2, quotient2 = n1;
		rem1 = rem2, rem2 = n2;
		i++;
	}
	return (0);
}
