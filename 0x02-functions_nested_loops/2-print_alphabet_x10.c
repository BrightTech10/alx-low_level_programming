#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase
 * and ends with new line
 *
 * Description: This will print a-z 10 times
 * main - Entry point
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int x = 0;
	while (x < 10)
	{
		int y = 'a';
		while (y <= 'z')
		{
			putchar(y);
			y++;
		}
		x++;
		putchar('\n');
	}
}
