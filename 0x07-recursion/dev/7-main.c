#include "bootcamp.h"
#include <stdio.h>

/**
 * main - check the code for Bootcamp School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("bootcamp");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    r = is_palindrome("");
    printf("%d\n", r);
    r = is_palindrome("r");
    printf("%d\n", r);
    r = is_palindrome("rd");
    printf("%d\n", r);
	r = is_palindrome("dad");
    printf("%d\n", r);
    return (0);
}
