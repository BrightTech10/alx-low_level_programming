#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - function to multiply two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: returns 0 (Success)
 */

int main(int argc, char *argv[])
{
/* If program receives less than two or no argument, print error */
if (argc < 3)
{
printf("Error\n");
return (1);
}

int mul; /* Declare a int variable to store the result of multiplication */
mul = strtol(argv[1], NULL, 10) * strtol(argv[2], NULL, 10);

printf("%d\n", mul);

return (0);
}

