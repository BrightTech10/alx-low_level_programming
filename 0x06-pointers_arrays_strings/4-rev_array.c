#include main.h
#include <stdio.h>

/**
 * print_array - print elements of array with comma and space
 *
 * @a: pointer variable to array
 * @n: size of array
 *
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
 * reverse_array - to reverse the elements of an array
 *
 * @a: pointer variable to array
 * @n: size of array
 *
*/


void reverse_array(int *a, int n)
{
int rev[n];

for (int i = 0; i < n; i++)
{
rev[n - 1 - i] = a[i];
}

for (int i = 0; i < n; i++)
{
a[i] = rev[i];
}

}
