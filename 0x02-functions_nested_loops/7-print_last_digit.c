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
c = c * -1;
}
last_digit = c % 10;
printf("%d", last_digit);
return (last_digit);
}
