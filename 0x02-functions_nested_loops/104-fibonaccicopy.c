#include <stdlib.h>
#include <stdio.h>

void printstring(char(sizeof(long) * 2);

/**
 * main - print fibonacci numbers up to 98 numbers total
 *
 * Return: Always 0.
 */
int main(void)
{
	int size = sizeof(long) * 2;
	char x[sizeof(long) * 2], y[sizeof(long) * 2], z[sizeof(long) * 2];
	int i = 0, k = 0, ycount, ycount2, xcount, sum;
	int j = size;

	while (i < j)
	{
		x[i] = '\0';
		y[i] = '\0';
		i++;
	}

	x[0] = '1';
	y[0] = '2';
	i = 0;
	while (i < 98)
	{
		printstring(x);
		for (k = 0; y[k] != '\0'; k++)
		{
			z[k] = y[k];
		}
		ycount = 0;
		while (y[ycount] != '\0')
		{
			sum = y[ycount] + x[xcount] - '0';
			xcount++;
			ycount2 = ycount;
			ycount++;
			if (sum > 10)
			{
				y[ycount2] = sum % 10 + '0';
				ycount2++;
				if (y[ycount2] != '9')
				{
					y[ycount2] = y[ycount2] + '1';
				}
				else
				{
					while (y[ycount2] == '9')
					{
						y[ycount2] = y[ycount2] + '1';
						ycount2++;
					}
					if (y[ycount2] == '\0')
					{
						y[ycount2] = '1';
					}
				}
			}
			else
			{
				y[ycount] = sum + '0';
			}
		}
		for (k = 0; z[k] != '\0'; k++)
		{
			x[k] = z[k];
		}
		i++;
	}
	putchar('\n');
	return (0);
}
