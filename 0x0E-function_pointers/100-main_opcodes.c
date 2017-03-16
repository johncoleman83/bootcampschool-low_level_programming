#include <stdio.h>
#include <stdlib.h>
/**
 * main - follows instructions of input operation
 * @argc: count of inputs
 * @argv: array of inputs
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	int i, bytes = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}
	for (i = 0; i < bytes; i++)
		printf("%x ", ((unsigned char *)main)[i]);
	putchar('\n');
	return (0);
}
