#include <stdio.h>

/**
 * main - input
 *
 * Return: null
 */

int main(void)
{
	int Acharacter;
	char Ainteger;
	long Along;
	long long Alonglong;
	float Afloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(Acharacter));
	printf("Size of an int: %lu byte(s)\n", sizeof(Ainteger));
	printf("Size of a long int: %lu byte(s)\n", sizeof(Along));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(Alonglong));
	printf("Size of a float: %lu byte(s)\n", sizeof(Afloat));

	return (0);
}
