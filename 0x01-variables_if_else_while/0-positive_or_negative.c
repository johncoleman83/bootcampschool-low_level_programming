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
	char *positive = "positive\n";
	char *negative = "negative\n";
	char *zero = "zero\n";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d is %s", n, n == 0 ? zero : n > 0 ? positive : negative);
	return (0);
}
