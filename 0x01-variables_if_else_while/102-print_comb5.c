#include <stdio.h>
/**
 * main - execute putchar function
 * Description: the program prints all possible combinations
 * of two 2-digit numbers ranging from 0 to 99
 *
 * Return: returns 0 if successful
 */
int main(void)
{
	int i, j;

	i = 0;
	while (i < 100)
	{
		j = 0;
		while (j < 100)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i == 98 && j == 99)
					break;
				putchar(',');
				putchar(' ');
			}

			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
