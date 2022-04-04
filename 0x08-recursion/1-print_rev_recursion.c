#include "main.h"
#include <string.h>

void _print_rev_recursion(char *s)
{
int size, index, len;
char temp;

index = 0;
size = strlen(s);
len = size - 1;

temp = s[index];
s[index] = s[len - index];
s[len - index] = temp;

if (index == len / 2)
    return;

_print_rev_recursion(s);
}

