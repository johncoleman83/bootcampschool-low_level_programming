#include "3-calc.h"
/**
 * main - follows instructions of input operation
 * @argc: count of inputs
 * @argv: array of inputs
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (get_op_func(argv[2]))
		{
			printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
			return (0);
		}
		else
		{
			printf("Error\n");
			return (99);
		}
	}
	printf("Error\n");
	return (98);
}
