#include "main.h"

/**
 * print_sign - print the sign of a number
 * and returns 1 if c is a letter, lowercase,
 * or uppercase, otherwise 0
 * @c: parameter to test for different cases
 * Description: This function checks for alphabetic characters
 * main - Entry point
 * Return: Always 0 (Success)
*/

int print_sign(int n)
{
if(n > 0)
{
return (1);
printf("+");
}
if(n == 0)
{
return (0);
printf("0");
}
if(n < 0)
{
return (-1);
printf("-");
}
}
