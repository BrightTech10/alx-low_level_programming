#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int a = ',';
int b = ' ';
int x = 48;
int y;
while (x < 58)
{
y = x + 1;
while (y < 58)
{
putchar(x);
putchar(y);
if (x == 56 && y == 57)
{
break;
}
putchar(a);
putchar(b);

y++;
}
x++;
}

putchar('\n');
return (0);
}
