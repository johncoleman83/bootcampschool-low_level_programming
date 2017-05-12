#include "operators.h"
/**
 * op_add - addition of a + b
 * @a: input integer a
 * @b: input integer b
 * Return: sum
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction of a - b
 * @a: input integer a
 * @b: input integer b
 * Return: difference
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication of a * b
 * @a: input integer a
 * @b: input integer b
 * Return: product
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of a / b
 * @a: input integer a
 * @b: input integer b
 * Return: quotient
 */
int div(int a, int b)
{
	if (b != 0)
		return (a / b);
}
/**
 * op_mod - modulo of a / b
 * @a: input integer a
 * @b: input integer b
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
}
