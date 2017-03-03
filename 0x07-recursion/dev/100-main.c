#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

/*    r = wildcmp("main.c", "*.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*a*i*n*.*c*");
    printf("%d\n", r);
    r = wildcmp("main.c", "main.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "ma********************************c");
    printf("%d\n", r);
    r = wildcmp("main.c", "*");
    printf("%d\n", r);
    r = wildcmp("main.c", "***");
    printf("%d\n", r);
    r = wildcmp("main.c", "m.*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "**.*c");
    printf("%d\n", r);
    r = wildcmp("main-main.c", "ma*in.c");
    printf("%d\n", r);
    r = wildcmp("main", "main*d");
    printf("%d\n", r);
    r = wildcmp("abc", "*b");
    printf("%d\n", r);*/
    r = wildcmp("holberton.c", "*.c");
    printf("%d\n", r);
    r = wildcmp("holberton.c", "*h*o*l*b*e*r*t*o*n*.*c*");
    printf("%d\n", r);
    r = wildcmp("holberton.c", "holberton.c");
    printf("%d\n", r);
    r = wildcmp("holberton.c", "h*c");
    printf("%d\n", r);
	r = wildcmp("holberton.c", "hol********************************c");
    printf("%d\n", r);
    r = wildcmp("holberton.c", "*");
    printf("%d\n", r);
    r = wildcmp("holberton.c", "***");
    printf("%d\n", r);
    r = wildcmp("holberton.c", "h.*c");
    printf("%d\n", r);
    r = wildcmp("holberton.c", "**.*c");
    printf("%d\n", r);
    r = wildcmp("holberton-holberton.c", "holbe*rton.c");
    printf("%d\n", r);
    r = wildcmp("holberton", "holberton*d");
    printf("%d\n", r);
    r = wildcmp("def", "*e");
    printf("%d\n", r);
    r = wildcmp("", "*");
    printf("%d\n", r);
    r = wildcmp("main.c", "ma*********************************************************d");
    printf("%d\n", r);	
    return (0);
}
