#include <string.h>
#include "main.h"

/**
 * puts_half - function that prints half of string
 *
 * @a: pointer variable to a string
*/

void puts_half(char *a)
{
int len, i, n;
len = strlen(a);
n = (len - 1) / 2;

if ((len % 2) != 0)
{
n += 1;
for (i = n; i < len; i++)
{
putchar(a[i]);
}
}

if ((len % 2) == 0)
{
for (i = len / 2; i < len; i++)
{
putchar(a[i]);
}
}
printf("\n");
}
