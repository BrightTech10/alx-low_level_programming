#include "main.h"

/**
 * main - Entry point
 * Description: print_alphabet function prints alphabets a -z in lowercase
 * followed by a new line
 * Return: Always 0 (Success)
*/

void print_alphabet(void) /* Prints alphabets a -z in lowercase */
{
int x = 'a';
while (x <= 'z')
{
putchar(x);
x++;
}
putchar('\n');
}
