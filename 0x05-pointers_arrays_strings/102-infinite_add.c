#include "holberton.h"
/**
 * infinite_add - adds values of two strings together
 * @n1: first string of integers
 * @n2: second string of ints
 * @r: result string
 * size_r: size of result string
 *
 * Return: void
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, num1 = 0, sum1 = 0;
	int len2 = 0, num2 = 0, sum2 = 0;
	int num = 0, sum = 0, i, j;
	char temp;
	char n1c[size_r];
	char n2c[size_r];

	while(n1[len1] != '\0')
		len1++;
	while(n2[len2] != '\0')
		len2++;
	if (len1 >= size_r || len2 >= size_r)
		return (0);
	for (j = 0, i = len1 - 1; j < len1; j++, i--)
		n1c[j] = n1[i];
	for (j = 0, i = len2 - 1; j < len2; j++, i--)
		n2c[j] = n2[i];
	while (num < size_r && (n1c[num1] != '\0' && n2c[num2] != '\0'))
	{
		sum1 = num1 < len1 ? n1c[num1] - '0' : 0;
		sum2 = num2 < len2 ? n2c[num2] - '0' : 0;
		sum += (sum1 + sum2);
		r[num] = sum % 10 + '0';
		sum = sum < 10 ? 0 : 1;
		num++;
		if (n1c[num1] != '\0')
			num1++;
		if (n2c[num2] != '\0')
			num2++;
	}
	if (sum != 0)
		return (0);
	for (i = num - 1, j = 0; j < num / 2; j++, i--)
		temp = r[j], r[j] = r[i], r[i] = temp;
	return (r);
}
