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

if (argc > 1)
{
int i;

mul = 1;
for (i = 1; i < argc; i++)
{
int mul = mul * strtol(argv[i], NULL, 10);
}
printf("%d\n", mul);
}

return (0);
}

