#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function to add positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: returns 0 (Success)
 */

int main(int argc, char *argv[])
{
if (argc == 1) /* If number of arguments is only 1 */
{              /* Print and return 0is argv  */
printf("0\n");
return (0);
}

int i, j, sum;
sum = 0;
for (i = 1; i < argc; i++) /* starting with the argument on 1st index and iterating */
{
for (j = 0; argv[i][j] != '\0'; j++) /* starting with column on the 1st index and iterating */
{
if (!isdigit(argv[i][j])) /* print 0 if a non-digit is found, return 1 */
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]); /* Add digits if no non-digit is found */
}
}
printf("%d\n", sum);

return (0);
}
