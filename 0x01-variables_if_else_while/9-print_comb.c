#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int s = ' ';
int c = ',';
int x = '0';
while (x <= '8')
{
putchar(x);
putchar(c);
putchar(s);
x++;
}
putchar('9');
return (0);
}
