#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * @a: number of args
 * @b: pointer to args
 * Return: 1 for error, 0 not
 */
int main(int a, char **b)
{
	if (a < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(*(b + 1)) * atoi(*(b + 2)));
	return (0);
}
