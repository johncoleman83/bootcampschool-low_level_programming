#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types or arguments to be passed
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	char *temp_s, *types = "cifs", temp_c;
	double temp_f;
	int temp_d, i = 0, j;

	va_start(valist, format);
	while (format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == types[j])
			{
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
					printf("%lf", temp_f);
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
				}
				if (format[i + 1])
					printf(", ");
				j = 3;
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
