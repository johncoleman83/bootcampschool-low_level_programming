#include <stdio.h>
/**
 * main - Entry Point
 * @a: number of args
 * @b: pointer to args
 * Return: Always 0 (Success)
 */
int main(int a, char **b)
{
	while (a--)
		printf("%s\n", *b++);
	return (0);
}
