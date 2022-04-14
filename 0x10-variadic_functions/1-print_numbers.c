#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - variadic function to print numbers
 * @separator: character to separate numbers
 * @n: number of arguments
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list num;
unsigned int i;
unsigned int num_list;

va_start(num, n);

for (i = 0; i < n; i++)
{
num_list = va_arg(num, const unsigned int);
printf("%d", num_list);
if (separator != NULL)
{
if (i != (n - 1))
printf("%s", separator);
}
}
printf("\n");
va_end(num);
return;
}
