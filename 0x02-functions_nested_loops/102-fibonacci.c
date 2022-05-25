#include <stdio.h>
#include <stdlib.h>

/**
 * main - to print first 50 Fibonacci numbers
 *
 * Return: Always 0 on success
 */
int main(void)
{
	int i, j, next, count;

	i = 1;
	j = 2;
	next = 3;
	printf("%d, %d, ", i, j);

	count = 0;
	while (count < 50)
	{
		printf("%d", next);
		if (count == 49)
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
