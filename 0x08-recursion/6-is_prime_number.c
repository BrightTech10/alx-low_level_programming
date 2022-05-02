#include "main.h"

/**
 * getPrime - function that checks the given integer
 * whether it is a prime number or not
 * @k: number to be checked
 * @i: number to be used to check if k is a prime number
 * Return: returns 1 if prime; 0 if not
*/

int getPrime(int k, int i)
{
if (k == i)
{
return (1);
}

if (k % i == 0)
return (0);

return (getPrime(k, i + 1));
}

/**
 * is_prime_number - function that checks for a prime number
 * @n: number to be checked
 *
 * Return: returns 1 if prime; 0 if not
*/

int is_prime_number(int n)
{
if (n <= 1)
return (0);

else
return (getPrime(n, 2));
}
