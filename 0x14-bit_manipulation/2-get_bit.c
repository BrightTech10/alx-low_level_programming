#include "main.h"

/**
 * get_bit - returns value of a bit at an index
 * @n: decimal number
 * @index: index
 * Return: return value of bit at index
 * else it returns -1 in case of an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i, j;
int array[100];

for (i = 0; n != 0; i++)
{
array[i] = n % 2;
n = n / 2;
}

for (j = i - 1; j >= 0; j--)
{
if (j == index)
return (array[j]);

else if (index < 0)
return (-1);
}

}
