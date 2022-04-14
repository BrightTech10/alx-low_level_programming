#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - variadic function to compure sum of arguments
 * @n: number of arguments
 *
 * Return: returns 0 if n is 0, else sum
 */

int sum_them_all(const unsigned int n, ...)
{
va_list args; /* Variable to iterate arguments */
int i, sum; /* Declare i and sum; i for looping */
sum = 0; /* Initialize sum to 0 */

va_start(args, n);

for (i = 0; i < n; i++)
{
sum += va_arg(args, const unsigned int);
}
va_end(args);
return (sum);
}
