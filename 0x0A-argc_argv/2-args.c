#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - function to print all arguments received
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 (Success)
*/

int main(int argc, char *argv[])
{

int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
