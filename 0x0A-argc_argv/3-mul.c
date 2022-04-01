#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - function to print name of program
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 (Success)
*/

int main(int argc, char *argv[])
{
if (argc == 1)
{
printf("Error\n");
return (1);
}

int mul;
if (argc > 1)
{
int a = strtol(argv[1], NULL, 10);
int b = strtol(argv[2], NULL, 10);
mul = a * b;

printf("%d\n", mul);
}

return (0);
}

