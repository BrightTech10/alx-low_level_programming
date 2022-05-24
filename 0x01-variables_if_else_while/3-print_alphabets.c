#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the alphabet in lowercase,
 * and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y;

	x = 'a';
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	y = 'A';
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
