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

int result, a, b;
if (argc > 1)
{
a = strtol(argv[1], NULL, 10);
b = strtol(argv[2], NULL, 10);
result = a * b;
}
printf("%d\n", result);

return (0);
}
