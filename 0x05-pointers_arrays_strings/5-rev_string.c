#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses string
 * @a: pointer variable of type char
*/
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}


void rev_string(char *a)
{
int len, i;
len = strlen(a);
for (i = 0; i < len/2; i++)
{
swap(&a[i], &a[len - i - 1]);
}
}
