#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible different
 * combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = ',';
	int b = ' ';
	int x, y, z;

	x = 48;
	while (x < 58)
	{
		y = x + 1;
		while (y < 58)
		{
			z = y + 1;
			while (z < 58)
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (x == 55 && y == 56 && z == 57)
					break;
				putchar(a);
				putchar(b);
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
