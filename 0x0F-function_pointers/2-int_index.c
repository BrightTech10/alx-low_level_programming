#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function to search for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to a function
 *
 * Return: returns index of matching element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
/* If size of array is 0 or less, return -1 */
if (size <= 0)
return (-1);

if (array && cmp)
{
int i; /* Declare i for looping */
/* Loop through array; call pointer to function */
for (i = 0; i < size; i++)
{
/* If element of array matches function requirement, */
/* return index of that element */
if (cmp(array[i]))
return (i);
}

/* If element of array does not match function requirement, */
/* return -1 */
if (!(cmp(array[i])))
return (-1);
}
}
