#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings using at most n bytes
 *
 * @dest: destination string
 * @src: source string; to be appended to the destination string
 * @n: n bytes from source string
 *
 * Return: returns pointer to destination string
*/

char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);

return (dest);
}
