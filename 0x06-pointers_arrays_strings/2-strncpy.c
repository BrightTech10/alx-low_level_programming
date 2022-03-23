#include "main.h"
#include <string.h>

/**
 * _strncpy - concatenates two strings using at most n bytes
 *
 * @dest: destination string
 * @src: source string; to be copied to the destination string
 * @n: n characters from source string
 *
 * Return: returns pointer to destination string
*/


char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);

return (dest);
}
