#include <stdio.h>
#include "bootcamp.h"
#include <limits.h>
/**
 * main - check the code for a software development program students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_binary(UINT_MAX);
	printf("\n");
	print_binary(-3333333);
	printf("\n");
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
