#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned integer
 * @b: pointer to string
 * Return: return 0 if b is NULL or if b != 0 or 1
 * else it returns the converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int sum, len, decVal;
int i;

len = strlen(b);
decVal = 1;
sum = 0;

if (!b)
return (0);

else
{
for (i = (len - 1); i >= 0; i--)
{
if (b[i] != '0' && b[i] != '1')
return (0);

if (b[i] == '1')
sum += decVal;

decVal *= 2;
}
}

return (sum);
}
