#include "main.h"
/**
 * print_sign - print the sign of a number
 * and returns 1 if c is a letter, lowercase,
 * or uppercase, otherwise 0
 * @n: parameter to test for different cases
 *
 * Description: This function checks for alphabetic characters
 * main - Entry point
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
	char a = '+';
	char b = '0';
	char c = '-';
	if (n > 0)
	{
		_putchar(a);
		return (1);
	}
	if (n == 0)
	{
		_putchar(b);
		return (0);
	}
	if (n < 0)
	{
		_putchar(c);
		return (-1);
	}
	return (0);
}
