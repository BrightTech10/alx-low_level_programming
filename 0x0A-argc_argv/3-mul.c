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
if (argc < 3) /* If program receives less than two or no argument, print error */
{
printf("Error\n");
return (1);
}

int i; /* Declare a int variable to count */
int mul; /* Declare a int variable to store the result of multiplication */
mul = 1;
for (i = 1; i < argc; i++)
{
mul = mul *strtol(argv[i], NULL, 10); /* result of multiplying the arguments passed */
}
printf("%d\n", mul);


return (0);
}

