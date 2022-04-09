#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @c: integer parameter
 * Return: return last digit of integer
*/

int print_last_digit(int c)
{
int last_digit;
if (c < 0)
{
c = -c;
}
last_digit = c % 10;
_putchar(last_digit + '0');
return (last_digit);
}
