#include <stdio.h>

/**
 * main - compute sum of multiples of an integer and print
 * Return: return 0 (Success)
 */

int main(void)
{
long int sum1, sum2, sum3, final_sum, i;
sum1 = 0;
sum2 = 0;

for (i = 0; i < 1024; i++)
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
final_sum = sum1 + sum2 - sum3;
printf("%d\n", final_sum);

return (0);
}
