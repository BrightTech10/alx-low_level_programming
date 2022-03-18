#include "main.h"

/**
 * _isupper - checks for uppercase characters
 *
 * @c: argument to test for different cases
 *
 * Return: return 1 if uppercase, and 0 otherwise
*/

int _isupper(int c)
{
int val;
if (c >= 'A' && c <= 'Z')
{
val = 1;
}
else
{
val = 0;
}
return (val);
}
