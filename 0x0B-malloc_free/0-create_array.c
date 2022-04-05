#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array; initialize to specific character
 * @size: size of array
 * @c: specific character
 * Return: returns NULL if size = 0 or pointer fails
 * else returns pointer to allocated memory (str)
 */

char *create_array(unsigned int size, char c)
{
unsigned int count; /* Declare variable for loop count */
char *str; /* Declare pointer to allocated memory */

/* Allocate memory and store address in pointer */
str = malloc(sizeof(char) * size);

/* If pointer fails, return NULL*/
/* This is to avoid segmentation fault */
if (!str)
{
printf("Error! Could not allocate space for array\n");
return (NULL);
}

/* For loop to initialize all elements of the array with char c */
for (count = 0; count < size; count++)
{
str[count] = c;
}
/* If size of array is 0, return NULL */
if (size == 0)
return (NULL);

/* returns pointer to allocated memory of the array */
return (str);
}
