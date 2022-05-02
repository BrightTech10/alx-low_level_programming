#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints an array
 *
 * @a: pointer variable to an array
 * @n: number of elements of an array
*/

void print_array(int *a, int n)
{
int i = 0;

while (i < n)
{
printf("%d", a[i]);

if (i == (n - 1))
{
break;
}

printf(", ");
i++;
}
printf("\n");
}
