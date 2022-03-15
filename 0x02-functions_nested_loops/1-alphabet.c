#include "main.h"
#include <stdio.h>

/**
 *main - check the code
 *Return: Always 0
*/

void print_alphabet();

int main(void)
{
print_alphabet();
return (0);
}

void print_alphabet()
{
int x = 'a';
while (x <= 'z')
{
putchar(x);
x++;
}
putchar('\n');
}
