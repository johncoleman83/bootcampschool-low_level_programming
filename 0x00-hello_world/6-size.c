#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char acharacter;
	int ainteger;
	long along;
	long long alonglong;
	float afloat;

	printf("Size of a char: %lu byte(s)\n\
Size of an int: %lu byte(s)\n\
Size of a long int: %lu byte(s)\n\
Size of a long long int: %lu byte(s)\n\
Size of a float: %lu byte(s)\n",
	       sizeof(acharacter), sizeof(ainteger), sizeof(along),
	       sizeof(alonglong), sizeof(afloat));

	return (0);
}
