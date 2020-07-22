#include "bootcamp.h"
#include <stdio.h>

/**
 * main - check the code for Bootcamp School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "Bootcamp School!\n";
    char *p;

    p = string_toupper(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
