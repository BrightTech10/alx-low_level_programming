#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int x = 'a', y = 'A';;
while (x <= 'z')
{
putchar(x);
x++;
}
putchar('\n');

while (y <= 'Z')
{
putchar(y);
y++;
}
return (0);
}
