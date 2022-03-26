//#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase characters
 *
 * @c: argument to test for different cases
 *
 * Return: return 1 if uppercase, and 0 otherwise
*/

int _isupper(int c)
{
return (c >= 'A' && c <= 'Z');
}

int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
