#include "main.h"

/**
 * print_alphabet - prints alphabets a -z in lowercase
 * followed by a new line
 *
 * Description: This prints alphabets a-z in lowercase
 * main - Entry point
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int x = 'a';
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
}
