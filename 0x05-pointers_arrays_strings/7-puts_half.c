#include <stdio.h>
#include "main.h"

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
