#include "main.h"
/**
 * print_times_table - prints the n times table starting with 0
 * @n: integer value
 */
void print_times_table(int n)
{
	int row, col, val;

	if (n > 15 || n < 0)
		return;
	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			val = row * col; /* val of each table item */
			if (val < 10)
			{
				if (col != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(val + '0');
			}
			else
			{
				if (val < 100)
				{
					if (col == 1)
						_putchar(' ');
					if (col != 1)
						_putchar(' ');
					_putchar((val / 10) + '0');
					_putchar((val % 10) + '0');
				}
				else
				{
					_putchar(((val / 10) / 10) + '0');
					_putchar(((val / 10) % 10) + '0');
					_putchar((val % 10) + '0');
				}
			}
			if (col == n)
				break;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
