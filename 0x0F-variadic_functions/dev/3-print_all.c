#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types or arguments to be passed
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	char *temp_s, temp_c;
	double temp_f;
	int temp_d, i = 0, orders;

	va_start(valist, format);
	while (format[i])
	{
		orders = 0;
		switch (format[i])
		{
		case 'c' :
			temp_c = va_arg(valist, int);
			printf("%c", temp_c);
			orders = 1;
			break;
		case 'i' :
			temp_d = va_arg(valist, int);
			printf("%d", temp_d);
			orders = 1;
			break;
		case 'f' :
			temp_f = va_arg(valist, double);
			printf("%lf", temp_f);
			orders = 1;
			break;
		case 's' :
			temp_s = va_arg(valist, char*);
			if (temp_s)
			{
				printf("%s", temp_s);
				orders = 1;
				break;
			}
			printf("(nil)");
			orders = 1;
			break;
		default :
			break;
		}
		if (format[i + 1] && orders)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(valist);
}
