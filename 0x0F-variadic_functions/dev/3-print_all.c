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
	float temp_f;
	int temp_d, i = 0, orders;

	while (format)
	{
	va_start(valist, format);
		while (format[i])
		{
			orders = 1;
			switch (format[i])
			{
			case 'c' :
				temp_c = va_arg(valist, int);
				printf("%c", temp_c);
				break;
			case 'i' :
				temp_d = va_arg(valist, int);
				printf("%d", temp_d);
				break;
			case 'f' :
				temp_f = va_arg(valist, double);
				printf("%g", temp_f);
				break;
			case 's' :
				temp_s = va_arg(valist, char*);
				if (temp_s)
				{
					printf("%s", temp_s);
					break;
				}
				printf("(nil)");
				break;
			default :
				orders = 0;
				break;
			}
			if (format[i + 1] && orders)
				printf(", ");
			i++;
		}
		va_end(valist);
		break;
	}
	printf("\n");
}
