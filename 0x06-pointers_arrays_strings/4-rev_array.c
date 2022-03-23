#include "main.h"
#include <stdio.h>

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
for (i = 0; i < n - 1; i++)
{
result = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = result;
}

}
