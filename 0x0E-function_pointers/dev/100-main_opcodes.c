#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints n number of opcodes from main()
 * @argc: count of inputs
 * @argv: array of input including n # of bytes to print
 * Return: 0 success, 1 error, 2 error
 */
int main(int argc, char **argv)
{
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	if (bytes > 0)
	{
		for (i = 0; i < bytes - 1; i++)
		{
			printf("%02x ", ((unsigned char *)main)[i]);
		}
		printf("%hhx\n", ((unsigned char *)main[i]));
	}
	return (0);
}
