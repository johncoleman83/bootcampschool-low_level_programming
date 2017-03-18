#include "variadic_functions.h"
/**
 * print_strings - prints input strings followed by new line
 * @separator: string to separate each printed string
 * @n: number of input strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *temp;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(valist, char*);
		printf("%s", temp ? temp : "(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
