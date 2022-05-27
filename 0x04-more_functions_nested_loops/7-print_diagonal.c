#include "main.h"

/**
 * print_diagonal - prints the '\' n times diagonally
 * @n: integer value
 */
void print_diagonal(int n)
{
	int i, count;

	if (n == 0 || n < 0)
		_putchar('\n');
	else
	{
		for (count = 1; count <= n; count++)
		{
			_putchar('\\');
			_putchar('\n');
			if (count == n)
				break;
			i = 1;
			for (i = 1; i <= count; i++)
				_putchar(' ');
		}
	}
}
