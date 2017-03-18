#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types or arguments to be passed
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	char *temp_s;
	int i = 0, orders;

	while (format && format[i])
	{
		va_start(valist, format);
		while (format[i])
		{
			orders = 1;
			switch (format[i++])
			{
			case 'c':
				printf("%c", va_arg(valist, int));
				break;
			case 'i':
				printf("%d", va_arg(valist, int));
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				break;
			case 's':
				temp_s = va_arg(valist, char*);
				if (temp_s)
				{
					printf("%s", temp_s);
					break;
				}
				printf("(nil)");
				break;
			default:
				orders = 0;
				break;
			}
			if (format[i] && orders)
				printf(", ");
		}
		va_end(valist);
	}
	printf("\n");
}
