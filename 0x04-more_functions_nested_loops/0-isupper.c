#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * and returns 1 if uppercase, and 0 otherwise
 * @c: parameter to test for different cases
 *
 * Description: This function checks for uppercase characters
 * main - Entry point
 * Return: Always 0 (Success)
*/

int isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
