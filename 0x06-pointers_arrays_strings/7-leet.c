#include <string.h>
#include "main.h"

/**
 * leet - encodes string into 1337
 *
 * @a: pointer to string variable
 * Return: returns pointer to string
*/

char *leet(char *a)
{
int i, len;
len = strlen(a);

for (i = 0; i < len; i++)
{

if ((a[i] == 'a' || a[i] == 'A'))
{
a[i] = 52;
}

else if ((a[i] == 'e' || a[i] == 'E'))
{
a[i] = 51;
}

else if ((a[i] == 'o' || a[i] == 'O'))
{
a[i] = 48;
}

else if ((a[i] == 't' || a[i] == 'T'))
{
a[i] = 55;
}

else if ((a[i] == 'l' || a[i] == 'L'))
{
a[i] = 49;
}

}

return (a);
}
