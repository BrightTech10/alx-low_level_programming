#include "main.h"

/**
 * _isdigit - checks for a digit
 *
 * @c: parameter to test for different cases
 *
 * Return: Always 0 (Success)
*/

int _isdigit(int a)
{
if (a >= 48 && a <= 57)
{
return (1);
}
else
{
return (0);
}
}
