#include "main.h"
#include <string.h>

/**
 * _strlen - function to find the length of a string
 * @s: string of characters to be counted
 * Return: return the length of string
*/

int _strlen(char *s)
{
char *str;
int len;

str = "My first strlen!";
len = strlen(str);
return (len);
}
