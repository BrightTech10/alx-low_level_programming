#include "main.h"

/**
 * _abs - computes the absolute value of an integer x
 * @c: parameter to test for different cases
 * Description: This function computes the absolute value of an integer x
 * main - Entry point
 * Return: Always 0 (Success)
*/

int _abs(int c)
{
if (c < 0)
{
c = (-1) * c;
printf("%d", c);
}
c = abs(c);
printf("%d", c);
return (0);
}
