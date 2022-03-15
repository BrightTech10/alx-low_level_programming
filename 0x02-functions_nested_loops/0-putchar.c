#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: Program to print _putchar and move to next line
 * Return: Always 0 (Success)
*/
int main(void)
{

    char c[9] = "_putchar";
    int i;
    for (i = 0; i <= 8; i++)
    {
        putchar(c[i]);
    }

    putchar('\n');
    return (0);

}
