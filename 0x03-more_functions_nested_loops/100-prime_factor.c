#include <stdio.h>
#include <math.h>
int is_prime(unsigned long);
int is_factor(unsigned long);

/**
 * main - prints largest prime factor of 612852475143 followed by '\n'
 *
 * Return: Always 0, Success!
 */
int main(void)
{
	unsigned long i = 2;

	while (i <= 612852475143 / 2)
	{
		if (612852475143 % i == 0)
		{
			if (is_prime(612852475143 / i) == 1)
			{
				printf("%lu\n", i);
				break;
			}
		}
		i++;
	}
	return (0);
}

/**
 * is_prime - checks if number is prime
 *
 * Return: 1 prime, 0 not prime
 */
int is_prime(unsigned long x)
{
	unsigned long i = 2;

	while (i <= sqrt(x))
	{
		if (x % i == 0)
			return 0;
		i++;
	}
	return 1;
}
