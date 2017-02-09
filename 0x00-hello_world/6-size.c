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

	printf("Size of a char: %lu byte(s)\n\
Size of an int: %lu byte(s)\n\
Size of a long int: %lu byte(s)\n\
Size of a long long int: %lu byte(s)\n\
Size of a float: %lu byte(s)\n",
	       sizeof(Acharacter), sizeof(Ainteger), sizeof(Along),
	       sizeof(Alonglong), sizeof(Afloat));

	return (0);
}
