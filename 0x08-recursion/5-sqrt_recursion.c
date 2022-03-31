#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number to be checked
 * Return: returns i if n equals 1 or -1 if n is less than 1.
 * It also calls the getRoot function
*/

int _sqrt_recursion(int n)
{
if (n == 1)
return (1);

else if (n < 1)
return (-1);

else
return getRoot(n, 2);
}

/**
 * getRoot - function that computes the square root of a number
 * @k: number to be tested
 * @i: number used to check for root
 * Return: returns -1 if i*i is less than k or i if i*i equals k
*/

int getRoot(int k, int i)
{
if ((i * i) > k)
return (-1);

else if ((i * i) == k)
{
return (i);
}
return (getRoot(k, i + 1));
}
