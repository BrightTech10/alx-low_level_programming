#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses string
 * swap - swaps the values of variables
 * @a: pointer variable of type char
 * @x: variable to be swapped with y
 * @y: variable to be swapped with x
*/
void swap(char *x, char *y)
{
char temp = *x;
*x = *y;
*y = temp;
}

void rev_string(char *a)
{
int len, i;
len = strlen(a);
for (i = 0; i < len / 2; i++)
{
swap(&a[i], &a[len - i - 1]);
}
}