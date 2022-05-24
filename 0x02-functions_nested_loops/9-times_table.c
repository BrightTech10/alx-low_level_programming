#include "main.h"
/**
 * times_table - prints the 9 times table starting with 0
 *
 */
void times_table(void)
{
	int i, j, mul;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			printf("%d", j * i);
			if (j == 9)
				break;
			printf(", ");
			j++;
		}
		printf("\n");
		i++;
	}
}
