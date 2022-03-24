#include "main.h"
#include <string.h>

/**
 * string_toupper - converts lowercase string to uppercase
 *
 * @a: pointer to string variable
 * Return: returns pointer to string
*/

char *string_toupper(char *a)
{
int i, len;
len = strlen(a);

for (i = 0; i < len; i++)
{
if (a[i] >= 'a' && a[i] <= 'z')
{
a[i] = a[i] - 32;
}
}
return (a);
}
