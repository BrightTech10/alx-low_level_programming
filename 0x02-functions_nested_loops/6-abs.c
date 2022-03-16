#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _abs(int x) - computes the absolute value of an integer x
 *
 * Description: This function computes the absolute value of an integer x
 * main - Entry point
 * Return: Always 0 (Success)
*/

int _abs(int num)
{
int num;
printf("Enter an integer: ");
scanf("%d", &num);
int a;
a = _abs(num);
printf("Absolute value is %i\n", a);
return (0);
}
