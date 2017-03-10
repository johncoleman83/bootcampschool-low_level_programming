#include "holberton.h"
/**
 * str_len - finds string length
 * @str: input pointer to string
 * Return: length of string
 */
int str_len(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		len++;
	return (len);
}
/**
 * str_to_arr - converts array of chars to array of ints
 * @str: input pointer to string
 * @arr: input pointer to arr
 * Return: 1 succes, 0 failure
 */
int str_to_arr(char *str, int *arr)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 48 || str[i] > 57)
		{
			printf("Error");
			return (0);
		}
		arr[i] = (str[i] - 48);
	}
	return (1);
}
/**
 * mallokmem - mallocs for array of multiplication results
 * @mul_result: pointer to array of strings
 * @nums: rows
 * @digits: columns
 * Return: void
 */
void malmen(int **mul_result, int nums, int digits)
{
	int i, j;

	mul_result = malloc(sizeof(int) * (nums));
	for (i = 0; i < nums; i++)
		mul_result[i] = malloc(sizeof(int) * (digits));
	for (i = 0; i < nums; i++)
		for (j = 0; j < digits; j++)
			mul_result[i][j] = 0;
}
/**
 * multiply - multiplies 2 #'s, prints result, must be 2 #'s
 * @small: smaller factor
 * @len_s: length of small number
 * @big: bigger factor
 * @len_b: length of big factor
 * @mul_result: pointer to result
 * Return: void
 */
void multiply(int *small, int len_s, int *big, int len_b, int **mul_result)
{
	int i = 0, s = len_s - 1, b, product, carry = 0, nums = 0, digits;

	while (i < len_s)
	{
		b = len_b - 1, digits = (len_b + len_s - i);
		while (b >= 0)
		{
			product = small[s] * big[b];
			product += carry;
			mul_result[nums][digits] += product % 10;
			digits--, b--, carry = product / 10;
		}
		nums++, i++, s--;
	}
}
/**
 * add - adds array of strings together
 * @mul_result: pointer to 2D int array with numbers to add
 * Return: void
 */
void add(int **mul_result, int nums, int digits, int *sum_result, int len_r)
{
	int i = digits, j, k = len_r, sum, carry = 0;

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
	while (i < k)
		printf("%d", sum_result[i++]);
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
	int **mul_result, *sum_result, *small, *big;

	if (argc != 3)
	{
		printf("Error");
		exit(98);
	}
	len_s = str_len(argv[1]);
	len_b = str_len(argv[2]);
	len_r = len_s + len_b;
	sum_result = malloc(sizeof(int) * len_r);
	if (len_s < len_b)
	{
		small = malloc(sizeof(int) * len_s);
		big = malloc(sizeof(int) * len_b);
		if(!str_to_arr(argv[1], small) || !str_to_arr(argv[2], big))
			exit(98);
	}
	else
	{
		temp = len_b, len_b = len_s, len_s = temp;
		small = malloc(sizeof(int) * len_s);
		big = malloc(sizeof(int) * len_b);
		if (!str_to_arr(argv[2], small) || !str_to_arr(argv[1], big))
			exit(98);
	}
	malmem(mul_result, len_s, len_r);
	multiply(small, len_s, big, len_b, mul_result);
	add(mul_result, len_s, len_b, sum_result, len_r);
	return (0);
}
