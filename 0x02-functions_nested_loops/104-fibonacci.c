#include <stdio.h>
#include <stdlib.h>

/**
 * main - to print first 98 Fibonacci numbers
 *
 * Return: Always 0 on success
 */
int main(void)
{
	long int i, j, next, count;

	i = 1;
	j = 2;
	next = 3;
	printf("%lu, %lu, ", i, j);

	count = 3;
	while (count <= 98)
	{
		printf("%lu", next);
		if (count == 50)
			break;
		printf(", ");
		i = j;
		j = next;
		next = i + j;

		count++;
	}
	printf("\n");
	return (0);
}
