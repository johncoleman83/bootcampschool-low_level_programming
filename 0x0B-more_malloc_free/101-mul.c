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
 * add_arrays - adds 2 arrays of ints
 * @mul_result: pointer to array with numbers from product
 * @sum_result: pointer to array with numbers from total sum
 * @len_r: length of both arrays
 * Return: void
 */
void add_arrays(int *mul_result, int *sum_result, int len_r)
{
	int i = 0, len_r2 = len_r - 1, carry = 0, sum;

	while (i < len_r)
	{
		sum = carry + mul_result[len_r2] + sum_result[len_r2];
		sum_result[len_r2] = sum % 10;
		carry = sum / 10;
		i++;
		len_r2--;
	}
}
/**
 * multiply - multiplies 2 #'s, prints result, must be 2 #'s
 * @small: smaller factor
 * @len_s: length of small number
 * @big: bigger factor
 * @len_b: length of big factor
 * @len_r: length of result arrays
 * Return: 0 fail, 1 success
 */
int *multiply(char *small, int len_s, char *big, int len_b, int len_r)
{
	int i = 0, s = len_s - 1;
	int b, product, carry, digit, *mul_result, *sum_result;

	sum_result = _calloc(sizeof(int), (len_r));
	while (i < len_s)
	{
		mul_result = _calloc(sizeof(int), len_r);
		b = len_b - 1, digit = (len_r - 1 - i);
		if (small[s] < '0' || small[s] > '9')
		{
			printf("Error\n");
			return (NULL);
		}
		carry = 0;
		while (b >= 0)
		{
			if (big[b] < '0' || big[b] > '9')
			{
				printf("Error\n");
				return (NULL);
			}
			product = (small[s] - '0') * (big[b] - '0');
			product += carry;
			mul_result[digit] += product % 10;
			carry = product / 10;
			digit--, b--;
		}
		add_arrays(mul_result, sum_result, len_r);
		free(mul_result);
	    i++, s--;
	}
	return (sum_result);
}
/**
 * print_me - prints my array of the hopeful product here
 * @sum_result: pointer to int array with numbers to add
 * @len_r: length of result array
 * Return: void
 */
void print_me(int *sum_result, int len_r)
{
	int i = 0;

	while (sum_result[i] == 0 && i < len_r)
		i++;
	if (i == len_r)
		_putchar('0');
	while (i < len_r)
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
	int len_s, len_b, temp, len_r;
	int *sum_result;
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
	sum_result = multiply(small, len_s, big, len_b, len_r);
	if (sum_result == NULL)
		exit(98);
	print_me(sum_result, len_r);
	return (0);
}
