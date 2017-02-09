#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int t;
	char *greaterfive = "and is greater than 5\n";
	char *lesssix = "and is less than 6 and not 0\n";
	char *zero = "and is 0\n";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	t = n % 10;

	printf("Last digit of %d is %d ", n, t);
	printf("%s", t == 0 ? zero : t > 5 ? greaterfive : lesssix);

	return (0);
}
