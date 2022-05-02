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
int z;
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
{
break;
}
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
