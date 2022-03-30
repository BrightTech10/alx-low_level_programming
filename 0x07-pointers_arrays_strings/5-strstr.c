#include "main.h"

/**
 * _strstr - a function that locates a string
 * @haystring: first string
 * @needle: substring
 * Return: returns a pointer to the beginning of the located substring
 *
 * or NULL if no substring is not found
*/

char *_strstr(char *haystack, char *needle)
{

/**
 * First scan quickly through the two strings looking for a
 * single- character match. When it's found, then compare the
 * rest of the substring.
*/

char *a, *b;

b = needle;

if(*b == 0)
{
return ((char*)haystack);
}

for (; *haystack != 0; haystack++)
{
if (*haystack != *b)
{
continue;
}

a = haystack;
while (1)
{
if (*b == 0)
{
return ((char*)haystack);
}
if (*a++ != *b++)
{
break;
}
}
b = needle;
}
return (0);
}
