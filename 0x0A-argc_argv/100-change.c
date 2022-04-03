#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print minimum number of coins
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 (Success)
 */

int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}

int i, cents, total_cents;
total_cents = 0;
cents = atoi(argv[1]);
while (cents > 0)
{
if (cents >= 25)
cents -= 25;
else if (cents >= 10)
cents -= 10;
else if (cents >= 5)
cents -= 5;
else if (cents >= 2)
cents -= 2;
else if (cents >= 1)
cents -= 1;
total_cents += 1;
}
printf("%d\n", total_cents);
return (0);
}
