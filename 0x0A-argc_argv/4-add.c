#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to add positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: returns 0 (Success)
 */

int main(int argc, char *argv[])
{
int i, j, sum;
if (argc == 1)
{
printf("0\n");
return (0);
}


sum = 0;
/* starting with the argument on 1st index and iterating */
for (i = 1; i < argc; i++)
{
/* starting with column on the 1st index and iterating */
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j])) /* checks characters if digit or not */
{
/* print Error if a non-digit is found, return 1 */
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]); /* Add digits if no non-digit is found */
}
printf("%d\n", sum);
return (0);
}
