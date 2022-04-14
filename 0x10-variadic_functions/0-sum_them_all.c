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
unsigned int i, sum; /* Declare i and sum; i for looping */
sum = 0; /* Initialize sum to 0 */

if (n == 0)
return (0);

else
{
va_start(args, n); /* Start iterating arguments */

/* Loop through arguments and print sum */
for (i = 0; i < n; i++)
{
sum += va_arg(args, const unsigned int);
}
}
va_end(args); /* Free the va_list */
return (sum);
}
