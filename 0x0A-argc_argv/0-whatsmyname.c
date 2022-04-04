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
int i;
for (i = 0; i < argc; i++)
{
if (i == 0)
{
printf("%s\n", argv[i]);
}
}

return (0);
}
