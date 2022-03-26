#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: natural number
*/
void print_to_98(int n)
{
if (n < 98)
{
for (int a = n; a <= 98; a++)
{
printf("%d", a);
if (a == 98)
{
putchar('\n');
break;
}
putchar(',');
putchar(' ');
}
}
if (n > 98)
{
for (int b = n; b >= 98; b--)
{
printf("%d", b);
if (b == 98)
{
putchar('\n');
break;
}
putchar(',');
putchar(' ');
}
}
if (n == 98)
{
printf("%d", n);
putchar('\n');
}
}
