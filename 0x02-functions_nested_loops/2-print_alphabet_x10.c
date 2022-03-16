#include "main.h"

/**
 * main - Entry point
 *
 * Description: print 10 times the alphabet, in lowercase
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
