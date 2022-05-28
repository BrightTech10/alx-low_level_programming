#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer value
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
	else
	{
		if (n / 10)
			print_number(n / 10);

		_putchar((n % 10) + '0');
	}
}
