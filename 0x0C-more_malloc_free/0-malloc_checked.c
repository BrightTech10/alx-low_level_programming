#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: unsigned integer variable
 *
 * Return: returns 98 if malloc fails
 * else returns pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
int *ptr = malloc(sizeof(unsigned int));

if(!ptr)
{
printf("Error! Could not allocate space for array\n");
return (98);
}

return (ptr);
}
