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
	unsigned long num = 612852475143, i = 2, check;

	while (i <= num / 2)
	{
		if (num % i == 0)
		{
			check = num / i;
			if (is_prime(check) == 1)
			{
				printf("%lu\n", check);
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
