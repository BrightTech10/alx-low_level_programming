#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array; initialize to specific character
 * @size: size of array
 * @c: specific character
 * Return: returns NULL if size = 0,
 * else returns pointer to allocated memory (str)
 */

char *create_array(unsigned int size, char c)
{
unsigned int count; /* Declare variable for loop count */
char *str; /* Declare pointer to allocated memory */

/* Allocate memory and store address in pointer */
str = malloc(sizeof(char) * size);

/* For loop to initialize all elements of the array with char c */
for (count = 0; count < size; count++)
{
str[count] = c;
}

/* If size of array is 0, return NULL */
if (size == 0)
return NULL;

if (str == NULL)
return NULL;

/* Else return pointer to allocated memory */
else
return (str);
}
