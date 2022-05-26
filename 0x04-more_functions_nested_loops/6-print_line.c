#include "main.h"

/**
 * print_line - prints the character '_' n times
 * @n: integer value
 */
void print_line(int n)
{
	int count;

	if (n == 0 || n < 0)
		_putchar('\n');
	else
	{
		for (count = 1; count <= n; count++)
			_putchar('_');
		_putchar('\n');
	}
}
