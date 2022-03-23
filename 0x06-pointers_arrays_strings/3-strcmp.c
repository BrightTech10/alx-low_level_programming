#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: returns 1 if s1 > s2;
 * -1 if s1 < s2;
 * 0 if s1 == s2
*/


int _strcmp(char *s1, char *s2)
{

if (s1 < s2)
{
return (-1);
}

if (s1 == s2)
{
return (0);
}

if (s1 > s2)
{
return (1);
}
}
