#include <stdio.h>
#include <stdlib.h>

/**
 * main - to print sum of even-valued terms of the
 * Fibonaaci sequence whose values do not exceed 4,000,000
 *
 * Return: returns 0 if successful
 */
int main(void)
{
	long int i, j, next, sum;

	i = 1;
	j = 2;
	next = i + j;
	sum = 2;

	while (next <= 4000000)
	{
		i = j;
		j = next;
		next = i + j;
		if ((next % 2) == 0)
			sum = sum + next;
	}
	printf("%lu\n", sum);
	return (0);
}
