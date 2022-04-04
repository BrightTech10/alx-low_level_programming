//#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print the last digit of a number
 * @c: integer parameter
 * Return: Always 0 (Success)
*/


int print_last_digit(int c)
{
int last;
last = (c % 10);
return (last);
}

int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    putchar('0' + r);
    putchar('\n');
    return (0);
}
