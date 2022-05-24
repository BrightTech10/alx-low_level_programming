#include "main.h"
#include <limits.h>

/**
 * print_last_digit - print the last digit of a number
 * @c: integer parameter
 * Return: return last digit of integer
 */

int print_last_digit(int c)
{
	int last_digit;

	last_digit = c % 10;
	if (last_digit < 0)
		last_digit = -1 * last_digit;

	_putchar(last_digit + '0');
	return (last_digit);
}
