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
int a;
scanf("%d", &num);
a = _abs(num);
printf("%d\n", a);
return (0);
}
