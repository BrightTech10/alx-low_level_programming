#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print name of program
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 (Success)
*/

int main(int argc, char *argv[])
{
printf("%s\n", argv[0]);
int i;
for (i = 1; i < argc; i++)
{
printf("%s\n", argv[i]);
}
}
