#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses string
 * @a: pointer variable of type char
 *
 * swap_int - swaps the values of variables
 * @x: variable to be swapped with y
 * @y: variable to be swapped with x
*/
void swap_int(int *x, int *y)
{
int temp = *x;
*x = *y;
*y = temp;
}

void rev_string(char *a)
{
int len, i;
len = strlen(a);
for (i = 0; i < len / 2; i++)
{
swap_int(&a[i], &a[len - i - 1]);
}
}
