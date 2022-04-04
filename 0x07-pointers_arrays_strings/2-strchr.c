#include "main.h"

/**
 * _strchr - copy memory area
 * @s: destination memory area
 * @c: source memory area
 * Return: returns a pointer to the first occurrence of the character
*/

char *_strchr(char *s, char c)
{
do {
if (*s == c)
{
return ((char *)s);
}
} while (*s++);

return (0);
}
