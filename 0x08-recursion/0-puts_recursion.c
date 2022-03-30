#include "main.h"

/**
 * _puts_recursion - function to print a string
 * followed by a new line
 *
 * @s: pointer to string
*/

void _puts_recursion(char *s)
{
int len, i;
len = strlen(s);

for (i = 0; i < len; i++)
{
printf("%c", s[i]);
}
printf("\n");
}
