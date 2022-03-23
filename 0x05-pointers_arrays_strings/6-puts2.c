#include "main.h"
#include <string.h>

/**
 * puts2 - function that swaps the values of variables
 *
 * @a: pointer variable to the string str
*/

void puts2(char *a)
{
int len, i;
len = strlen(a);

for(i = 0; i < len; i+=2)
{
putchar(a[i]);
}
}
