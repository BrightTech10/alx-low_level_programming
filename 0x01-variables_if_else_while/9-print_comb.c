#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints all possible combinations
 * of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = ',';
	int b = ' ';
	int x;

	x = '0';
	while (x <= '9')
	{
		putchar(x);
		if (x == '9')
		{
			break;
		}
		putchar(a);
		putchar(b);
		x++;
	}
	putchar('\n');
	return (0);
}
