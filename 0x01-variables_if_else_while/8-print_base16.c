#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y;

	x = '0';
	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	y = 'a';
	while (y <= 'f')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
