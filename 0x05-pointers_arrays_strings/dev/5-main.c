#include "bootcamp.h"
#include <stdio.h>

/**
 * main - check the code for a software development program students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "a software development program!\n";
    char *p;

    p = string_toupper(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
