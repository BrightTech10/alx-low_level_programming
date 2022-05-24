#include "main.h"
/**
 * times_table - prints the 9 times table starting with 0
 */
void times_table(void)
{
	int row, col, val, tens, unit;

	row = 0;
	while (row <= 9)
	{
		col = 0;
		while (col <= 9)
		{
			val = row * col;
			if (val < 10)
			{
				if (col != 0)
					_putchar(' ');
				_putchar(val + '0');
				if (col == 9)
					break;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				tens = val / 10;
				unit = val % 10;
				_putchar(tens + '0');
				_putchar(unit + '0');
				if (col == 9)
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
