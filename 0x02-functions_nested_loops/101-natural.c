#include <stdio.h>

/**
 * sum_mul - compute sum of multiples of an integer
 * @n: integer variable to be computed
 * Return: return total value
 */
int sum_mul(int n)
{
	int sum1, sum2, sum3, total, i;
	sum1 = 0;
	sum2 = 0;
	sum3 = 0;
	for (i = 0; i < n; i++)
	{
		if ((i % 3) == 0)
		{
			sum1 += i;
		}
		if ((i % 5) == 0)
		{
			sum2 += i;
		}
		if ((i % 15) == 0)
		{
			sum3 += i;
		}
	}
	total = sum1 + sum2 - sum3;
	return (total);
}

/**
 * main -  prints sum of multiples
 * Return: return 0 (Success)
 */
int main(void)
{
	int final_sum;

	final_sum = sum_mul(1024);
	printf("%d\n", final_sum);

	return (0);
}
