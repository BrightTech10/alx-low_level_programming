#include <stdio.h>
#include <stdlib.h>
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
/* Function returns nothing based on these conditions */
if (array == NULL || size <= 0 || action == NULL)
{
return;
}

else
{
int i; /* Declare i for loop */
/* Loop through array; call pointer to function */
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
