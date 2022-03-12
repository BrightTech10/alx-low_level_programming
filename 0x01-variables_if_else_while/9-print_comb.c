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
do{
putchar(x);
putchar(c);
putchar(s);
x++;
}while (x <= '9');
putchar('\n');
return (0);
}
