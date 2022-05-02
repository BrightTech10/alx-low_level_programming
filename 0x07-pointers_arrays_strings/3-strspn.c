#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: first string
 * @accept: second string
 * Return: returns the number of bytes in the initial segment of s
*/

unsigned int _strspn(char *s, char *accept)
{
const char *s0 = s;
const char *c;
while (*s)
{
for (c = accept; *c; c++)
{
if (*s == *c)
break;
}
if (*c == '\0')
break;
s++;
}
return (s - s0);
}
