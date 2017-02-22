#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - generates passwords of random value
 *
 * Return: 0 always.
 */
int main(void)
{
	char result[51];
	int c, randomchar, randomlength = 0;

	c = 0;
	srand(time(0));
	while (randomlength < 100)
	{
		randomchar = rand() % 127;
		if (randomchar > 32)
			result[c] = randomchar, c++;
		randomlength += rand() % 10;
	}
	result[c] = '\0';
	printf("%s", result);

	return (0);
}
