#include <stdio.h>
/**
 * main - Entry point
 * Description: Classic FizzBuzz problem
 * Return: Always 0, Success!
 */
int main(void)
{
    int i;
    char result[4][9] = {"%d", "Fizz", "Buzz", "FizzBuzz"};

    for (i = 1; i < 101; i++)
    {
        printf(result[(i % 3 == 0) + (2 * (i % 5 == 0))], i);
        printf(i < 100 ? " " : "\n");
    }
	return (0);
}
