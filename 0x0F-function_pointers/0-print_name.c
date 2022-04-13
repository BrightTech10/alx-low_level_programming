#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function to print name
 * @name: pointer variable to name
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
/* call function pointer to print name */
f(name);
}

