#include "main.h"

/**
 * _pow_recursion - function to multiply x y times
 * @x: integer to be multiplies
 * @y: power
 * Return: returns -1 if y < 0; 1 if y == 0
*/


int _pow_recursion(int x, int y)
{

if (y == 0)
{
return (1);
}

if (y < 0)
{
return (-1);
}

return (x * _pow_recursion(x, y - 1));
}
