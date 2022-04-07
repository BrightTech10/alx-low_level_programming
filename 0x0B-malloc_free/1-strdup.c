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
char *ptr;
ptr = malloc(sizeof(str));
strcpy(ptr, str);

if (str == NULL)
return (NULL);

return (ptr);
}