#include "main.h"
#include <stdlib.h>


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
