#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strdup - function to return pointer to newly allocated memory
 * which contains a copy of the string given as a parameter
 * @str: string passed as parameter
 * Return: returns NULL if size = 0 or pointer fails
 * else returns pointer to newly allocated memory
 */

char *_strdup(char *str)
{
int len; /* Declare int variable for length of string */
len = strlen(str);
char *ptr; /* Declare pointer variable */

/* Allocate memory and store address in pointer */
ptr = malloc(sizeof(char) * len);

/* If pointer fails, return NULL*/
/* This is to avoid segmentation fault */
if (!str)
{
printf("Error! Could not allocate space for array\n");
return (NULL);
}

strcpy(ptr, str); /* Duplicate string str */

if (str == NULL)
return (NULL);

return (ptr);
}