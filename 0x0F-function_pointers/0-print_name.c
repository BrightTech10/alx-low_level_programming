#include "function_pointers.h"

/**
 * print_name - function to print name
 * @name: pointer variable to name
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}

}

