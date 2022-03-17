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
int a;
a = (-1) * c;
printf("%d", a);
}
int b;
b = abs(c);
printf("%d", b);
return (0);
}
