#include <string.h>
#include "main.h"

/**
 * puts_half - function that prints half of string
 *
 * @a: pointer variable to a string
*/

void puts_half(char *a)
{
int len, i;
len = strlen(a);

for (i = 0; i < len / 2; i++)
{
putchar(a[i]);
}

int n = (len - 1);
if ((len%2) != 0)
{
putchar(a[n]);
}
printf("\n");
}
