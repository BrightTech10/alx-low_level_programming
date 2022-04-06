#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strdup - function to return pointer to newly allocated memory
 * which contains a copy of the string given as a parameter
 * @str: string passed as parameter
 * Return: returns NULL if size = NULL or pointer fails
 * else returns pointer to newly allocated memory
 */
char *_strdup(char *str)
{
int size; /* Declare int variable size */
/* Initialize size to the size of string str */
size = sizeof(str);
char *ptr; /* Declare pointer variable */
char cpy[size]; /* Declare variable to hold copy of string */

/* Copy string str to cpy */
strcpy(cpy, str);

/* Allocate memory and store address in pointer */
ptr = malloc(sizeof(char) * sizeof(cpy));

/* If pointer fails, return NULL*/
/* This is to avoid segmentation fault */
if (!str)
{
printf("Error! Could not allocate space for array\n");
return (NULL);
}
/* If size of array is NULL, return NULL */
if (size == NULL)
return (NULL);

return (ptr);
}
