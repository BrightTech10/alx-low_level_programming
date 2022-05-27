#include "main.h"

/**
 * main - prints numbers from 1 to 100
 *
 * Description: the program prints 1 to 100
 * but for multiples of 3 it prints 'Fizz';
 * for multples of 5 it prints 'Buzz';
 * and for multiples of 3 and 5 it prints 'FizzBuzz'
 *
 * Return: returns zero if successful
 */
int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if ((count % 3 == 0) && (count % 5 == 0))
			printf("FizzBuzz");
		else if ((count % 3) == 0)
			printf("Fizz");
		else if ((count % 5) == 0)
			printf("Buzz");
		else
			printf("%d", count);
		if (count == 100)
			break;
		printf(" ");
	}
	printf("\n");
	return (0);
}
