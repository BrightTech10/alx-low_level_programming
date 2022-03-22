#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses string
 * swap(char *, char*) - swaps the values of variables
 * @a: pointer variable of type char
 * @x: variable to be swapped with y
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
