#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - function to print name of program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: returns 1 if program does not receive two argument; 0 is successful
 */

int main(int argc, char *argv[])
{
if (argc < 3)
{
printf("Error\n");
return (1);
}

else if (argc > 1)
{
int i;
int mul;
mul = 1;
for (i = 1; i < argc; i++)
{
mul = mul *strtol(argv[i], NULL, 10);
}
printf("%d\n", mul);
}

return (0);
}

