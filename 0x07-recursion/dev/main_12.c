#include <stdio.h>

int wildcmp(char *, char *);

/**
 * main - check the code for a software development program students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = wildcmp("", "*");
	printf("%d\n", r);
	return (0);
}
