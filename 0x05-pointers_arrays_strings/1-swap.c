#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @x: first integer value
 * @y: second integer value
*/

void swap_int(int *x, int *y)
{
int temp;
temp = *x;
*x = *y;
*y = temp;
}
