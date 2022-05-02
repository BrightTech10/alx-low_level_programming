#include "main.h"

/**
 * factorial - function to compute the factorial of an integer
 *
 * @n: integer variable
 * Return: returns -1 if n < 0; 1 if n == 0
*/

int factorial(int n)
{
if (n < 0)
{
return (-1);
}

if (n == 0)
{
return (1);
}

return (n * factorial(n - 1));
}
