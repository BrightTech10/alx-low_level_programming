#include "main.h"
/**
 * print_sign(int n) - print the sign of a number
 * and returns 1 if c is a letter, lowercase,
 * or uppercase, otherwise 0
 * @n: parameter to test for different cases
 * Description: This function checks for alphabetic characters
 * main - Entry point
 * Return: Always 0 (Success)
*/

int int print_sign(int n)
{
int n = 0;
if (n > 0)
{
printf("+");
return (1);
}
if (n == 0)
{
printf("0");
return (0);
}
if (n < 0)
{
printf("-");
return (-1);
}
return (0);
}
