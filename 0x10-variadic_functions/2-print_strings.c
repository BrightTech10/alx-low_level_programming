#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - variadic function to print strings
 * @separator: character to separate strings
 * @n: number of arguments
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list arg; /* Variable to iterate arguments */
/* Declare i and str; i for looping, str is string */
unsigned int i;
char *str;
va_start(arg, n); /* Start iterating arguments */
/* Loop through arguments and print strings */
for (i = 0; i < n; i++)
{
str = va_arg(arg, char *);
/* If string is not NULL print string */
/* else print (nil) */
if (str != NULL)
printf("%s", str);
else
printf("(nil)");
/* If is not NULL separate strings */
/* using the separator */
if (separator != NULL)
{
if (i != (n - 1))
printf("%s", separator);
}
}
printf("\n");
va_end(arg);
/* If is NULL don't print */
return;
}
