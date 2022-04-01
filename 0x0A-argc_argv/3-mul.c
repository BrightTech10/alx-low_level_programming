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

else if (argc > 1)
{
int i;
int result = 1;
for (i = 1; i < argc; i++)
{
int x = strtol(argv[i], NULL, 10);
result = result * x;
}
printf("%d\n", result);
}

return (0);
}

