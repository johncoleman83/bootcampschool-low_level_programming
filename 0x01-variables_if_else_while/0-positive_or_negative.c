#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * function_name - main
 *
 * Description: C programming learning
 *
 * Return: 0 no return
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
