#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single digit
 * numbers of base 10 starting from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	x = 0;
	while (x <= 9)
	{
		printf("%i", x);
		x++;
	}
	printf("\n");
	return (0);
}
