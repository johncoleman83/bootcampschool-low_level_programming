#include "holberton.h"
#include <limits.h>
/**
 * str_len - finds string length
 * @str: input pointer to string
 * Return: length of string
 */
int str_len(char *str)
{
	int len;

	for (len = 0; *str != '\0'; len++)
		len++, str++;
	return (len / 2);
}
/**
 * _calloc - allocates memory for an array using malloc
 * @bytes: bytes of memory needed per size requested
 * @size: size in bytes of each element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int bytes, unsigned int size)
{
	unsigned int i;
	char *p;

	if (bytes == 0 || size == 0)
		return (NULL);
	if (size >= UINT_MAX / bytes || bytes >= UINT_MAX / size)
		return (NULL);
	p = malloc(size * bytes);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < bytes * size; i++)
		p[i] = 0;
	return ((void *)p);
}
/**
 * multiply - multiplies 2 #'s, prints result, must be 2 #'s
 * @small: smaller factor
 * @len_s: length of small number
 * @big: bigger factor
 * @len_b: length of big factor
 * @mul_result: pointer to result
 * Return: 0 fail, 1 success
 */
int multiply(char *small, int len_s, char *big, int len_b, int **mul_result)
{
	int i = 0, s = len_s - 1, b, product, carry, nums = 0, digits;

	while (i < len_s)
	{
		b = len_b - 1, digits = (len_b + len_s - i - 1);
		if (small[s] < '0' || small[s] > '9')
		{
			printf("Error\n");
			return (0);
		}
		carry = 0;
		while (b >= 0)
		{
			if (big[b] < '0' || big[b] > '9')
			{
				printf("Error\n");
				return (0);
			}
			product = (small[s] - '0') * (big[b] - '0');
			product += carry;
			mul_result[nums][digits] += product % 10;
			printf("%d ", mul_result[nums][digits]);
			digits--, b--, carry = product / 10;
		}
		mul_result[nums][digits] += carry;
		printf("%d\n", mul_result[nums][digits]);
		nums++, i++, s--;
	}
	return (1);
}
/**
 * add_print - adds array of strings together and prints result
 * @mul_result: pointer to 2D int array with numbers to add
 * @nums: rows of array
 * @len_r: length of result array
 * Return: void
 */
void add_print(int **mul_result, int nums, int len_r)
{
	int i = len_r - 1, j, k = len_r, sum, carry = 0, *sum_result;

	sum_result = _calloc(sizeof(int), len_r);
	len_r--;
	while (i >= 0)
	{
		j = 0, sum = carry;
		while (j < nums)
		{
			sum += mul_result[j][i];
			j++;
		}
		sum_result[len_r] = sum % 10;
		carry = sum / 10, i--, len_r--;
	}
	sum_result[len_r] = carry;
	i = 0;
	while (sum_result[i] == 0 && i < k)
		i++;
	if (i == k)
		_putchar('0');
	while (i < k)
		_putchar(sum_result[i++] + '0');
	_putchar('\n');
}
/**
 * main - multiply 2 input #'s of large lengths and print result or print Error
 * @argc: input count of args
 * @argv: input array of string args
 * Return: 0, Success
 */
int main(int argc, char **argv)
{
	int len_s, len_b, temp, len_r, i;
	int **mul_result;
	char *small, *big;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	len_s = str_len(argv[1]), len_b = str_len(argv[2]);
	len_r = len_s + len_b;
	if (len_s < len_b)
		small = argv[1], big = argv[2];
	else
	{
		small = argv[2], big = argv[1];
		temp = len_b, len_b = len_s, len_s = temp;
	}
	mul_result = _calloc(sizeof(int), len_s);
	for (i = 0; i < len_s; i++)
		mul_result[i] = _calloc(sizeof(int), len_r);
	if (!multiply(small, len_s, big, len_b, mul_result))
		exit(98);
	add_print(mul_result, len_s, len_r);
	return (0);
}
