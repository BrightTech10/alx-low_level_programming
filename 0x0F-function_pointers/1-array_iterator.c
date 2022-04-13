#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * given as a parameter
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || size <= 0 || action == NULL)
{
return;
}

else
{
int i; /* Declare i for loop */
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
