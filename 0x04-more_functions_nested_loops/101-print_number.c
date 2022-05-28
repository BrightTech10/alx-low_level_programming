#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer value
 */
void print_number(int n)
{
	if (n < 0)
	{
		if (n < -9)
		{
			if (n == INT_MIN)
			{
				print_number(n / 10);
				_putchar((n % 1000000000) + '0');
			}
			else
			{
				n = n * -1;
				_putchar('-');
				if (n / 10)
					print_number(n / 10);
				_putchar((n % 10) + '0');
			}
		}
		else
		{
			n = n * -1;
			_putchar('-');
			_putchar(n + '0');
		}
	}
	else
	{
		if (n / 10)
			print_number(n / 10);
		_putchar((n % 10) + '0');
	}
}
