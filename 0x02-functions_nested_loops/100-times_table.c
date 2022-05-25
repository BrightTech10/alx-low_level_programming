#include "main.h"
/**
 * print_times_table - prints the n times table starting with 0
 * @n: integer value
 */
void print_times_table(int n)
{
	int row, col, val, div, rem, tens, tens2, unit, unit2;

	if (n > 15 || n < 0)
		return;

	row = 0;
	while (row <= n)
	{
		col = 0;
		while (col <= n)
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
				if (col == n)
					break;
				_putchar(',');
				_putchar(' ');
			}
			else if (val < 100) /* for two-digit numbers */
			{
				tens = val / 10;
				unit = val % 10;
				if (col == 1)
					_putchar(' ');
				if (col != 1)
					_putchar(' ');
				_putchar(tens + '0');
				_putchar(unit + '0');
				if (col == n)
					break;
				_putchar(',');
				_putchar(' ');
			}
			else /* for three-digit numbers and above */
			{
				div = val / 10;
				tens2 = div / 10;
				rem = div % 10;
				unit2 = val % 10;
				_putchar(tens2 + '0');
				_putchar(rem + '0');
				_putchar(unit2 + '0');
				if (col == n)
					break;
				_putchar(',');
				_putchar(' ');
			}
			col++;
		}
		_putchar('\n');
		row++;
	}
}
