#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes from src to be copied
 *
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];

}
}
