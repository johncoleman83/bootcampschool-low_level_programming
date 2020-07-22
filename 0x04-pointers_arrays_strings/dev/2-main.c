#include "bootcamp.h"
#include <stdio.h>

/**
 * main - check the code for Bootcamp School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "Bootcamp!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
