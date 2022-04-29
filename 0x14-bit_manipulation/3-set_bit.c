#include "main.h"

/**
 * get_bit - returns value of a bit at an index
 * @n: decimal number
 * @index: index
 * Return: return value of bit at index
 * else it returns -1 in case of an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(n) * 8))
return (-1);

*n = *n | (1 << index);
return (*n);
}
