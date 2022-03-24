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

if (c >= 65 && c <= 90)
{
return (1);
}

else if (c >= 97 && c <= 122)
{
return (0);
}

}
