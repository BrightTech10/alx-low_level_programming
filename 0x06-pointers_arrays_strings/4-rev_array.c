#include <stdio.h>
#include "main.h"

/**
 * print_array - to print an array;
 * add ", " when not on the zeroth index
 *
 * @a: pointer variable to array
 * @n: size of array
*/

void print_array(int *a, int n)
{
int i;

i = 0;
while (i < n)
{
if (i != 0)
{
printf(", ");
}
printf("%d", a[i]);
i++;
}
printf("\n");
}

/**
 * reverse_array - to reverse the content of an array
 *
 * @a: pointer variable to array
 * @n: size of array
 *
 * Return: returns reversed array elements
*/

void reverse_array(int *a, int n)
{
int i, result, rev;
for (i = 0; i < n / 2; i++)
{
result = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = result;
rev = result;
}
return (rev);
}
