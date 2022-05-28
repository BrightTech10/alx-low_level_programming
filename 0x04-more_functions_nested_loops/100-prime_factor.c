#include "main.h"

/**
 * main - prints the largest prime factor of a number
 *
 * Return: returns 0 if successful
 */
int main(void)
{
	long int i, max_prime, number;

	number = 612852475143;
	if (number % 2 == 0)
		max_prime = 2;
	while (number % 2 == 0)
		number = number / 2;

	for (i = 3; i <= number / 2; i += 2)
	{
		if (number % i == 0)
			max_prime = i;
		while (number % i == 0)
			number = number / i;

		if (number > 2)
			max_prime = number;
	}
	printf("%lu\n", max_prime);

	return (0);
}
