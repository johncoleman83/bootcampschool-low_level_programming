#include "3-calc.h"
/**
 * get_op_func - selects the correct function to perform operation
 * @s: input symbol
 * Return: pointer to another function the performs operation
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s))
			i++;
		else
			return (ops[i].f);
	}
	printf("Error\n");
	exit(99);
}
