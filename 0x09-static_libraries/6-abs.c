#include "main.h"

/**
 * _abs - computes the absolute value of an integer x
 * @c: integer
 *
 * Description: This function computes the absolute value of an integer x
 *
 * Return: returns absolute value of c
*/

int _abs(int c)
{
if (c < 0)
{
c = c * -1;
}
return (c);
}
