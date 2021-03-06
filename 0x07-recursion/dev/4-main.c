#include "bootcamp.h"
#include <stdio.h>

/**
 * main - check the code for a software development program students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _pow_recursion(1, 10);
    printf("%d\n", r);
    r = _pow_recursion(1024, 0);
    printf("%d\n", r);
    r = _pow_recursion(2, 16);
    printf("%d\n", r);
    r = _pow_recursion(5, 2);
    printf("%d\n", r);
    r = _pow_recursion(5, -2);
    printf("%d\n", r);
    r = _pow_recursion(-5, 2);
    printf("%d\n", r);
	r = _pow_recursion(-5, 3);
    printf("%d\n", r);
	r = _pow_recursion(-5, 4);
    printf("%d\n", r);
	r = _pow_recursion(-5, 5);
    printf("%d\n", r);
	r = _pow_recursion(-5, 6);
    printf("%d\n", r);
    return (0);
}
