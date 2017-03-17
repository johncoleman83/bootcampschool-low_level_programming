#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all it's parameters
 * @n: interger to number of arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i, sum = 0;

	va_start(valist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
