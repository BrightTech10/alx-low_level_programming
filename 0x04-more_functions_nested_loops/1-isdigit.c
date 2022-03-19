#include "main.h"

/**
 * _isdigit - checks for a digit;
 * returns 1 if c is a digit, 0 otherwise
 *
 * @c: parameter to test for different cases
 *
 * Description: This function checks for a digit
 * main - Entry point
 * Return: Always 0 (Success)
*/

int isdigit(int c)
{
return (c >= '0' && c <= '9');
}
