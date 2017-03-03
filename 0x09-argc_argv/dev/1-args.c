#include <stdio.h>
/**
 * main - Entry Point
 * @a: number of args
 * @b: pointer to args
 * Return: Always 0 (Success)
 */
int main(int a, char **b)
{
	if (b || !b)
		printf("%d\n", a - 1);
	return (0);
}
