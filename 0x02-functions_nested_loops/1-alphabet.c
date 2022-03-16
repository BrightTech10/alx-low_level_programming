#include "main.h"
#include <stdio.h>

/**
 *main - check the code
 *print_alphabet: Prints alphabets a -z in lowercase followed by a new line
 *Return: Always 0 (Success)
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
