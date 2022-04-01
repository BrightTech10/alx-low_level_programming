#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print number of arguments in a program
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 (Success)
*/

int main(int argc, char *argv[])
{
(void)argv[argc - 1];
printf("%d\n", argc);

return (0);
}

