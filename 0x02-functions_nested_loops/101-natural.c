#include <stdio.h>

/**
 * main - compute sum of multiples of an integer and print
 * Return: return 0 (Success)
 */

int main(void)
{
int sum1, sum2, final_sum, i;
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

}
final_sum = sum1 + sum2;
printf("%d\n", final_sum);

return (0);
}
