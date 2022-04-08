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

if (str == NULL)
return (NULL); 

int len = strlen(str); /* Declare int variable for length of string */

char *ptr;

/* Allocate memory and store address in pointer */
ptr = malloc(sizeof(char) * len + 1);

/* If pointer fails, return NULL*/
/* This is to avoid segmentation fault */
if (!ptr)
{
printf("Error! Could not allocate space for array\n");
return (NULL);
}

strcpy(ptr, str); /* Duplicate string str */


return (ptr);
}
