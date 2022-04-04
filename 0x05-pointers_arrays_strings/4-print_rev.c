#include <stdio.h>
#include <string.h>



void print_rev(char *a)
{
int i, len, temp;


len = strlen(a);


for (i = 0; i < len/2; i++)
{
temp = a[i];
a[i] = a[len - i - 1];
a[len - i - 1] = temp;

}
}


int main(void)
{
char *str;
str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
print_rev(str);
printf("Reversed string is: %s", str);
return (0);
}
