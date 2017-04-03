#include <stdio.h>
/**
 * main - main function
 * Return: always 0, success
 */
int main(void)
{
	int five = 5;
	printf("original five: %d\n", five);
	five = ~five;
	five = five + 1;
	printf("negative five: %d\n", five);
	five = ~five;
	five = five + 1;
	printf("back to positive five: %d\n", five);
	return (0);
}
