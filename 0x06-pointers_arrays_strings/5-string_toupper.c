#include <stdio.h>
#include <string.h>


char *string_toupper(char *a)
{
int i, len;
len = strlen(a);

for (i = 0; i < len; i++)
{
if (a[i] >= 'a' && a[i] <= 'z')
{
a[i] = a[i] - 32;
}
}
return (a);
}

int main(void)
{
char str[] = "Look up!\n";
char *ptr;

ptr = string_toupper(str);
printf("%s", ptr);
printf("%s", str);
return (0);
}
